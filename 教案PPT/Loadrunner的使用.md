# Loadrunner的使用



**选项公网测试地址：http://cfgjt.cn:8981/devt-web    用户名admin，密码11111111**

## 1.Loadrunner介绍

​	LoadRunner，是一种预测[系统行为](https://baike.baidu.com/item/系统行为/22463503?fromModule=lemma_inlink)和性能的[负载](https://baike.baidu.com/item/负载?fromModule=lemma_inlink)测试工具。通过模拟上千万用户实施并发负载及实时性能监测的方式来确认和查找问题，LoadRunner能够对整个企业架构进行[测试](https://baike.baidu.com/item/测试/112688?fromModule=lemma_inlink)。企业使用LoadRunner能最大限度地缩短测试时间，优化性能和加速应用系统的发布周期。

​	LoadRunner可适用于各种体系架构的自动[负载测试](https://baike.baidu.com/item/负载测试/10921210?fromModule=lemma_inlink)，能预测系统行为并评估系统性能。它支持高并发、多协议。

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304010957429.gif)

### 1.1.功能模块

- **VGenerator：虚拟用户生成器**，以虚拟用户的方式模拟真实用户的业务操作行为，可以录制脚本、编写脚本、调式脚本等
- **Controller：负载控制器/调度器**，按计划、按目标来控制用户数量，通过脚本组合设计负载场景和方案，它提供一个互动环境，既能建立起持续且循环的负载，又能管理和驱动负载方案。Loadrunner内含集成的实时监测器，在负载测试过程中的任何时候，都能观察到应用系统的运行性能
- **Analysis：结果分析器**，提供高级的分析和报告工具，以便迅速查找到性能问题并追溯原由
- **压力机：**在运行时，可远程安装和监控虚拟用户生成器，适用于大规模压测和大量用户负载，可以安装多个。



### 1.2.运行视图

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304011015975.png" alt="image-20230401101502670" style="zoom:50%;" />

1. 采用虚拟用户生成器录制脚本、编写脚本、调试脚本，完成脚本的准备工作
2. 通过脚本组合设计压测场景
3. 调度压力机进行场景分布式压测
4. 性能结果分析、图标分析



## 2.Loadrunner安装

### 2.1.下载

Loadrunner的官方下载地址为：https://www.microfocus.com/en-us/products/LoadRunner-professional/free-trial

![image-20230401102533706](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304011025897.png)

### 2.2.Loadrunner安装

- 以管理员的方式运行该文件（在安装前需关闭杀毒软件）：

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304011635678.png)

- 选择解压路径：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012051410.png" style="zoom: 50%;" />

- 安装依赖：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012053761.png" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012055206.png" style="zoom:50%;" />

- 选择安装路径：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012057977.png" style="zoom:50%;" />

- 安装后，桌面多了三个图标，分别是：分析器、调度器和虚拟用户生成器：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012118650.png" style="zoom:50%;" />

- 不选择证书，并不需要打开自述文件：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012120021.png" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012121092.png" style="zoom:50%;" />

### 2.3.安装组件和语言包

- 以管理员身份运行组件：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012123375.png" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012124749.png" style="zoom:50%;" />

- 以管理员身份运行语言包：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012126583.png" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012127436.png" style="zoom:50%;" />

- 安装语言包在`D:\Software\lr\DVD\Language-Packs\Chinese-Simplified\LoadRunner`路径下点击运行，但不建议使用中文，后期录制脚本可能出现编码问题，需要使用`lr_convert_string_encoding`进行转码。



> ### 2.4.安装压力机
>

安装压力机需在Linux系统上进行，本示例Linux版本问CentOS7，并且用户具有sudo权限。

- 解压压力机，找到`lg_linux_x64`文件，并压缩该文件：

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304012142691.png)

- 在/root目录下使用命令`mkdir root`创建root目录，并上传以上文件：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304021047568.png" alt="image-20230402104723450" style="zoom:50%;" />

- 解压该文件，并进入目录，赋予文件权限：

```shell
unzip lg_linux_x64.zip
cd lg_linux_x64
chmod 755 *
```

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304021054823.png" alt="image-20230402105432747" style="zoom:50%;" />

- 执行安装程序，进行安装：

```shell
sh installer.sh
```

**注意：**如出现以下情况，说明依赖不完整，我们需要修改yum源配置，然后下载依赖：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304021055391.png" alt="image-20230402105530315" style="zoom:50%;" />

> ```shell
> # 备份本地yum源
> mv /etc/yum.repos.d/CentOS-Base.repo /etc/yum.repos.d/CentOS-Base.repo.bak  
> 
> # 下载yum源配置文件到本地
> wget -O /etc/yum.repos.d/CentOS-Base.repo https://mirrors.aliyun.com/repo/Centos-7.repo
> 
> # 清空并更新缓存
> yum clean all && yum makecache
> 
> # 安装依赖
> yum install glibc.i686 libstdc++.i686 ncurses-libs.i686 keyutils-libs.i686 glib2.i686 libnsl.i686 libidn.i686 -y
> 
> # 如出现多库版本问题，可执行如下命令，然后再执行上面的安装
> yum update --setopt=protected_multilib=false 依赖名（如glib2）-y 
> 
> # 再次安装
> sh installer.sh
> ```
>

如出现密钥问题，可以参考：https://blog.csdn.net/qq_41817050/article/details/120135877

安装过程中，直接按`Enter`确认就行了，都选择默认的，只有安装证书时选择（2），不安装。

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304021321432.png" alt="image-20230402132130329" style="zoom:50%;" />

- 验证`54345`端口：

```shell
netstat -anp | grep 54345
```

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304021324650.png" alt="image-20230402132435594" style="zoom:50%;" />



- 启动命令：

```shell
cd /opt/MF/MF_LoadGenerator/
ls
```

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304021327955.png)



## 3.脚本录制

​	脚本录制就是将可视化操作转换为脚本代码，并利用脚本代码进行重复性操作，这种方式能简化测试人员的操作，大大降低工作量和难度。

​	脚本录制的方式分为以下几种：

- 直接录制：只支持Microsoft Edge
- 本地代理录制：支持各大浏览器
- 离线流量录制：几乎支持所有浏览器
- 手动代理录制：几乎支持所有浏览器
- 第三方代理：采用fidller进行辅助录制

**创建解决方案：**

- 创建脚本解决方案的方式为：**File---Create a new Script---选择方案类型---命名---create**

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304031433867.png" style="zoom:50%;" />



### 3.1.直接录制

​	如上创建一个test01的解决方案，点击上方菜单栏的录制按钮：

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304031458392.png)



**录制动作(Record into action)选项释义：**

- **vuser_init:**只执行一次，如登录操作
- **action:**循环执行
- **vuser_end:**结束时执行，如退出操作

**录制选项(Record)释义：**

- **Web Brower:**web浏览器录制方式
- **Windows Application:**windows应用程序录制
- **Remote Application via LoadRunner Proxy:**远程代理录制
- **Captured Traffic File Analysis:**离线流量分析

最终内容，点击Start Recording直接录制：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304031519233.png" alt="image-20230403151933137" style="zoom:50%;" />

打开浏览器后，生成了脚本，进行了收集：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304031533934.png" alt="image-20230403153333784" style="zoom:50%;" />

**注意：**有大部分可能进入Edge没法登录，此次脚本录制不成功。



### 3.2.本地代理录制

​	由于应用程序的兼容性问题，我们案例以谷歌浏览器作为测试浏览器进行本地代理录制。

- 新建一个脚本，命名为test2，脚本类型为web-HTTP/HTML：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304031602711.png" alt="image-20230403160244577" style="zoom:50%;" />

- 点击录制脚本按钮，输入内容如下：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304031610407.png" alt="image-20230403161021317" style="zoom:50%;" />

- 点击本页左下角“Recording Options”选项设置，在HTTP Properties---Advanced中勾选以下选项：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304031615314.png" style="zoom:50%;" />

- 点击录制，进入页面，输入用户名admin和密码11111111登录，登录进行后将动作由`vuser_init`切换到`action`，然后输入关键字`文本`搜索，然后再输入`文本1`搜索：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032055277.png" style="zoom:50%;" />

- 点击停止按钮，停止录制。看到工作台，`vuser_init`和`action`都生成了脚本：

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032100181.png)



### 3.3.离线流量录制

流线流量录制适用于大部分浏览器。

- 打开网站`http://cfgjt.cn:8981/devt-web`，在登录前打开F12，找到`Network`，然后登录，并搜索文本：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032121568.png" alt="image-20230403212133348" style="zoom:50%;" />

- 在网络中生成的数据中鼠标右键，选择“以HAR格式保存所有内容”：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032122248.png" alt="image-20230403212257136" style="zoom:50%;" />

- 打开LoadRunner，创建`test3`的脚本，并将光标放到`action`中，指把脚本放在里面：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032123083.png" alt="image-20230403212352837" style="zoom: 33%;" />

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032126595.png)



- 点击录制按钮，将动作改为`action`，将Record改为离线脚本录制，离线文件路径为刚刚保存的HAR文件，取消`127.0.0.1`前面的勾，并在`Recording Options`中取消之前选中的代理录制设置，具体设置如下：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032130591.png" alt="image-20230403213045376" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032131704.png" style="zoom:33%;" />

- 点击开始录制，生成录制脚本：

![image-20230403213201738](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304032132967.png)



### 3.4.远程代理录制

- 添加一个脚本，点击录制按钮，录制方式采用远程代理录制：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101453763.png" style="zoom:33%;" />

- 录制开始，控制台有启动录制的IP和端口：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101454174.png" alt="image-20230410145439063" style="zoom:33%;" />

- 打开浏览器，进入http://cfgjt.cn:8981/devt-web的登录页，然后设置代理IP为刚刚设置的代理IP（192.168.1.102）和端口号（浏览器设置-系统-代理）：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101458806.png" alt="image-20230410145846678" style="zoom:33%;" />

- 登录进网页，搜索`文本`，然后停止录制，查看生成的脚本：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101503259.png" alt="image-20230410150310107" style="zoom:33%;" />

- 关闭之前的浏览器代理。



### 3.5.脚本优化

- **脚本结构认识：**
  - Actions：脚本区
  - Extra Files：头文件区
  - Runtime Settings：运行时设置
  - Parameters：参数设计
  - Recording Report：录制报告
  - Replay Summary：回放总结

![image-20230410150713334](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101507388.png)

- 脚本区的执行顺序由先到后是`vuser_init--Action--vuser_end`。我们可以分别在这三个中添加执行输出的测试脚本，点击回放查看，脚本如下：

```shell
lr_log_message("测试1","init")
lr_log_message("测试2","Action")
lr_log_message("测试3","end")
```

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101515957.png" style="zoom:33%;" />

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101517512.png)



- 选择Actions，添加一个新的Action1:

![image-20230410152423432](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101524498.png)

- 录制一个脚本，录制设置为本地代理，录制信息如下：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101520607.png" alt="image-20230410152058497" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101521102.png" alt="image-20230410152122038" style="zoom: 50%;" />

- 登录进页面后，动作改为`Action`，搜索`文本`，再更换一个`Action1`，点击`组件视图`，搜索`小红`，然后停止录制；
- 在`Recording Report`中查看生成的报告：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101534448.png" style="zoom:50%;" />

- 在`Host`中，可能有很多与我们业务不相关的主机，我们可以去掉勾选，然后点击`Regenerate`重新生成，这样就和我们当前录制脚本相关了：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101536770.png" style="zoom:50%;" />

- 在右边图示的`Content Type`中过滤掉一些无用资源，只保留Json数据，然后重新生成：

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101539470.png)



### 3.6.录制选项优化

录制选项的打开有两种方式：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101558621.png" style="zoom:50%;" />

- 在录制中有两种方式可以选择：
  - HTML-based script(默认)：把所有非资源请求录制到一个组；
  - URL-based script：把所有资源录制到一个组，包含JS，CSS等文件。



当录制选项重新设置，不需要再录制脚本，我们只需要把之前的脚本重新申请即可，点击`Record`---`Regenerate Script`---`OK`，





- 脚本语言设置：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101605743.png" style="zoom:33%;" />



## 4.脚本编写

### 4.1.脚本参数化

​	在实际的测试业务中，参数可能有很多，我们可以使用一个统一的变量替换这些参数，这些参数可以是文件或表格的形式，相当于在jmeter中`cvs`的参数格式。

​	这些参数可以增强代码的可读性，降低维护难度，减少错误的发生。比如在测试过程中主机、端口、查询条件等都是很少修改的量，可以使用参数代替。

​	在LR中有很多内置的参数，合理的采用会提升测试的效率。

#### 4.1.1.LoadGN

​	全称为 LoadGeneratorName，该参数是以压力机名称为基础，可按不同格式生成:

```shell
//定义一个 LoadGeneratorName 参数
char* NewParam=lr_eval_string("{NewParam}");
lr_log_message("参数 1,压力机参数名：%s",NewParam);
```

- 创建一个测试脚本，在Action.c中放入以上脚本，我们定义了一个参数名叫`NewParam`

![image-20230417143823666](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171438814.png)

- 在`Parameters`中新增参数`NewParam`，具体步骤如下：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171441271.png" style="zoom: 33%;" />

- 点击运行，打印参数值:

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171443441.png" style="zoom:33%;" />



#### 4.1.2.VuserID

​	该参数是以虚拟用户的序号为基础，可按不同格式生成。它相当于是当前用户所占用的一个线程：

- 创建一个VuserID，选择不通格式，步骤如下：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171448524.png" style="zoom:33%;" />

- 点击运行，看到打印出来的序号：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171449246.png" style="zoom:33%;" />

#### 4.1.3.表格参数化

​	表格参数是以表格行数据为基础生成的参数，和jmeter相同，可以支持记事本和cvs等文件格式导入。

- 定义一个表格数据参数：

```shell
lr_log_message("参数 2,表格参数：%s",lr_eval_string("{table_param}"));
```

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171504547.png" style="zoom: 33%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171505422.png" alt="image-20230417150534352" style="zoom:50%;" />

​	需要注意的是，我们在设置表格式数据时，取值数据和更新规则可以有如下设置方式：

- 取下一行数据方法有三种：
  - 1. 顺序：按照参数化的顺序一个一个的来取 
    2.  随机：参数化中的数据，每次随机的从中选取数据 
    3. 唯一：为每个虚拟用户分配一个唯一的一条数据

- 更新值的规则： 

  - 1. 每一次迭代时更新 
    2. 运行场景中只更新一次

  设置方式如下：

  <img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171511188.png" style="zoom:33%;" />

- 添加脚本，更改迭代次数，点击运行：

```shell
lr_log_message("参数 2,表格参数：%s",lr_eval_string("{table_param}"));
```

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171517715.png)

看到结果，迭代了5次，且按顺序运行：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171518190.png" alt="image-20230417151810114" style="zoom: 50%;" />

可以按不同取下一行和更新值的方式来测试。

#### 4.1.4.文件参数化

​	文件参数化和表格参数化的用法一样，只是将参数类型改为文件即可，此处不再赘述。

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171534173.png" style="zoom:33%;" />

#### 4.1.5.迭代编号

​	迭代编号参数是以运行逻辑的替代次数为基础，可按不同格式生成。

- 新建一个参数，参数类型选择为迭代编号：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171541916.png" style="zoom:33%;" />

```shell
lr_log_message("参数 3,迭代编号参数：%s",lr_eval_string("{iteration}"));
```

- 点击运行，迭代了5次，因为在`Runtime Settings`中设置了迭代5次：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171548676.png" style="zoom:33%;" />

#### 4.1.6.日期参数

​	日期参数可以按照固定的格式生成参数。

- 创建一个参数名为`date`，选择参数格式为`Date/Time`，并选择想要生成的日期格式：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171557985.png" style="zoom:50%;" />

- 添加如下脚本，点击运行：

```shell
lr_log_message("参数 1,迭代编号参数：%s",lr_eval_string("{date}"));
```

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171559297.png" style="zoom: 50%;" />

#### 4.1.7.随机数

- 创建参数`random`，选择随机数的参数类型`Random Number`，并设置生成随机数的范围和格式：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171604226.png" alt="image-20230417160404104" style="zoom:33%;" />

- 点击运行，看到生成的随机数：

![image-20230417160446011](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171604083.png)

#### 4.1.8.xml格式参数

​	xml格式参数和表格参数使用相同，只不过生成的格式为xml格式。

- 创建参数`xml`，选择参数类型为`xml`，并设置值：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171614304.png" style="zoom: 33%;" />

- 添加脚本，运行查看结果：

```shell
lr_log_message("参数 1,迭代编号参数：%s",lr_eval_string("{xml}"));
```

![image-20230417161549574](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171615649.png)



#### 4.1.9.用户自定义变量

​	如Jmeter中，用户可以自定义变量。

- 创建变量`custom`，并选择参数类型为`Custom`，并设置值：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171641816.png" style="zoom:50%;" />

- 输入脚本，运行查看：

```shell
lr_log_message("参数 1,迭代编号参数：%s",lr_eval_string("{custom}"));
```

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171643375.png)



### 4.2.规则关联

​	一般在发起请求时有可能用到前面步骤返回的结果，LR关联是把服务器返回的数据以参数来表示，同时作为后续请求的一个变量，规则关联分为手动关联和自动关联。

#### 4.2.1.手动关联

​	手动关联的步骤为：

1. 找到前置请求中返回的业务数据
2. 将上述数据设置为参数
3. 将后续条件采用参数化替代

- 创建一个新的脚本，录制这个脚本，录制信息如下：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171650968.png" alt="image-20230417165000856" style="zoom:50%;" />

- 登录页面，登录完成后停止录入脚本：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171705874.png" alt="image-20230417170507744" style="zoom:33%;" />

- 优化脚本，脚本只需要登录和查询菜单的，其他删除：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171707984.png" alt="image-20230417170747869" style="zoom:50%;" />

- 在回放设置中，打开日志，并将数据从服务器返回：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304171710177.png" style="zoom:50%;" />

- 点击回放，分析日志（如出现乱码，可按下步骤操作）：
  - 在录制选项选择 UTF-8
  -  在回放选项中选择 UTF-8
  - 在工作项中将转换脚本编码去掉

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211012336.png" style="zoom:33%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211011477.png" style="zoom:33%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211013572.png" style="zoom: 33%;" />

控制台输出信息：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211020129.png" style="zoom:50%;" />

​	那么为什么会返回登录过期呢？是因为我们**没有做规则关联，导致传递信息的时候导致认证token没有传递过去**。我们打开页面，在登录前打开`F12`然后，登录，在`网络`中观察`login.do`和`menu.do`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211126127.png" style="zoom: 50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211135088.png" style="zoom:50%;" />

​	所以我们把`login.do`的动作的token放到`menu.do`中，做一种关联。操作的步骤是在脚本中添加如下脚本：

```shell
//从服务端返回中取认证数据--放login.do前
web_reg_save_param("devtToken",
"LB=\"devt_token\":\"",
"RB=\"",
LAST);

lr_log_message("取得结果为:%s",lr_eval_string("{devtToken}"));

//将认证数据放置头部信息中--放menu.do前
web_add_auto_header("Authorization","Bearer {devtToken}");
```

​	如这些函数不记得，我们可以用关键字来搜索，搜索方式为：`在脚本中鼠标右键---Insert---New Step---搜索关键字（此处搜索save）`，然后在函数`web_reg_save_param`中添加信息：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211152296.png" style="zoom:50%;" />

​	生成脚本后，需要进行优化，否则转义时可能报错，如双引号需要进行转义，优化后的脚本如下：

```shell
web_reg_save_param("devtToken",
    "LB=\"devt_token\":\"",
    "RB=\"",
    "NotFound=ERROR",
    "Search=Body",
    LAST);
```

​	注意关联的脚本会放在动作之前。生成脚本后需要将该参数放到`menu.do`的头部信息，我们在`menu.do`前还是`Insert---New Step`，添加一个`web_add_auto_header`的函数，添加的函数为`menu.do`中的认证：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211200878.png" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211202289.png" alt="image-20230421120232213" style="zoom:67%;" />

```shell
web_add_auto_header("Authorization",
		"Bearer {devtToken}");
```

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211203751.png" alt="image-20230421120300663" style="zoom: 50%;" />

此时，重新回放，目录信息生成。

#### 4.2.2.自动关联

​	由 loadrunner 内置规则在录制时会自动生成关联，比如 JSESSION，COOKIE 自关动联。另外所有的自动关联均可以用手动关联替代，因此手动关联是我们的学习重点。

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211414074.png" style="zoom:33%;" />

### 4.3.事务的定义

​	事务（Transaction）用于模拟用户的一个相对完整的、有意义的业务操作过程，例如登录、查询、转账，这些都可以作为事务，而一般不会把每次 HTTP 请求作为一个事务。

​	在LoadRunner中，关于事务函数有：

```shell
lr_start_transaction("devt-query");				// 事务开始
lr_end_transaction("devt-query",LR_AUTO);		// 事务结束
lr_end_transaction("devt-query",LR_PASS);		// 事务成功结束
lr_end_transaction("devt-query",LR_FAIL);		// 事务失败结束
```

​	示例：

```shell
//不检查结果,自动结束
lr_end_transaction("devt-query",LR_AUTO);
//判断是否成功
if(atoi(lr_eval_string("{param1}"))>0)
{
	lr_end_transaction("devt-query",LR_PASS);
}
else
{
	lr_end_transaction("devt-query",LR_FAIL);
}
```

- 录制一个简单的脚本，登录页面，并做搜索操作：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211419007.png" alt="image-20230421141935857" style="zoom:50%;" />

- 优化脚本，保留`login.do,menu.do.list.do_3`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211424228.png" alt="image-20230421142425115" style="zoom:33%;" />

- 在登录之前和查询之后（即最前面和最后面）添加开始事务和结束事务，添加方式为：`鼠标右键---Insert----Start Transaction/End Transaction`。**注意：事务的名字要相同，否则会报错**。

```shell
lr_start_transaction("_search");
lr_end_transaction("_search", LR_AUTO);
```

- 在`list.do_3`前面添加一个参数规则`web_reg_save_param`，并将双引号进行转义，参数的名字为页面`list.do`中的返回码`repCode`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211443108.png" alt="image-20230421144345004" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211441336.png" style="zoom:50%;" />

添加规则完成后：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211444408.png" alt="image-20230421144435324" style="zoom:50%;" />

- 再修改结束事务的判断，如果大于0为成功，其他为失败：

```shell
if(atoi(lr_eval_string("{repCode}"))>0)
{
	lr_end_transaction("_search",LR_PASS);
}
else
{
	lr_end_transaction("_search",LR_FAIL);
}
```

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211448748.png" alt="image-20230421144830649" style="zoom:50%;" />

- 回放脚本，成功：

![image-20230421144858081](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211448195.png)



### 4.4.结果检查

​	利用结果检查函数，我们可以判断业务是否正确，类似于Jmeter的断言。检查函数有两个可以选择：

- 第一种：

```shell
web_reg_find("Text=Welcome",
	LAST );
```

- 第二种：

```shell
web_reg_find("Fail=NotFound",
    "Search=Body",
    "SaveCount=Token_Count",
    "TextPfx=\"devt_token\":\"",
    "TextSfx=\"",
    LAST);
```

​	我们以`4.3`录制的脚本为例，将事务的相关函数删除，我们检查是否登录成功。以第一种方式，添加一个`web_reg_find()`函数：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211515959.png" alt="image-20230421151540831" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211516056.png" alt="image-20230421151604964" style="zoom: 50%;" />

​	回放脚本，匹配成功：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211516437.png" alt="image-20230421151640318" style="zoom:50%;" />

## 5.常用函数

​	针对LR中常用的函数，我们要比较熟悉，一些不清楚的地方，记得查询官网帮助，以下是官网在线文档，非常具有参考价值。

- LR函数参考：https://admhelp.microfocus.com/vugen/en/2021-2021_R1/help/function_reference/Content/FuncRef/FuncRef.htm
- C语言函数参考：https://admhelp.microfocus.com/vugen/en/2021-2021_R1/help/function_reference/Content/FuncRef/c_language/etc/lrFuncRef_C_Lng_Funcs_cat.htm
- LR 常用函数参考(C)：https://admhelp.microfocus.com/vugen/en/2021-2021_R1/help/function_reference/Content/FuncRef/c_vuser/etc/lrFuncRef_CV_Utility_Functions.htm
- LR 常用函数参考(Java)：https://admhelp.microfocus.com/vugen/en/2021-2021_R1/help/function_reference/Content/FuncRef/java_vuser/etc/lrFuncRef_JV_Utility_Functions.htm
- LR 常用函数参考(JS)：https://admhelp.microfocus.com/vugen/en/2021-2021_R1/help/function_reference/Content/FuncRef/scripting/etc/lrFuncRef_VB_Utility_Funcs.htm

### 5.1.参数类函数

- `lr_eval_string()`：将参数转化为字符串。

```shell
lr_save_int(0, "searchCount");   	// 将数据存为int类型
lr_save_string("我是字符串", "str1");  // 将数据存为string
lr_output_message("Is zero, %s", lr_eval_string("{str1}"));
if (atoi(lr_eval_string("{searchCount}")) == 0) {
    lr_output_message("Is zero, %s", lr_eval_string("{searchCount}"));
}
lr_save_int(47, "searchCount");
if (atoi(lr_eval_string("{searchCount}")) != 0) {
    lr_output_message("Not zero, %s", lr_eval_string("{searchCount}"));
}
```

运行结果：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211553439.png" alt="image-20230421155327234" style="zoom:50%;" />

- `lr_eval_json()`：将字符串或者文件转换为 Json 对象。

```shell
char* json_input = "{"
    "\"firstName\": \"John\","
    "\"lastName\": \"Smith\""
"}";
lr_save_string(json_input, "JSON_Input_Param");
// 创建 json 对象
lr_eval_json("Buffer={JSON_Input_Param}",
	"JsonObject=json_obj_1", LAST);
//修改 json 对象值
lr_json_set_values("JsonObject=json_obj_1",
    "Value=test111111",
    "QueryString=$.firstName",
    "SelectAll=Yes",
    LAST);
//取得 json 对象值
lr_json_get_values("JsonObject=json_obj_1",
    "ValueParam=test1_result",
    "QueryString=$.firstName",
    LAST);
//json 传字符串
lr_json_stringify("JsonObject=json_obj_1","Format=compact","OutputParam=Result",LAST );
//打印结果
lr_log_message("%s--%s",lr_eval_string("{test1_result}"),lr_eval_string("{Result}"));
```

运行结果：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304211556210.png" alt="image-20230421155620083" style="zoom:50%;" />

- `lr_json_set_values()`：修改 Json 对象中的值。
- `lr_json_set_values()`：获取 Json 对象中的值。
- `lr_json_stringify()`：Json 对象转字符串。
- `lr_save_string()`：将变量以字符串类型存入参数。

```shell
char str1[100]="我是测试字符串";
lr_save_string(str1,"param1");
lr_log_message("%s",lr_eval_string("{param1}"));
```

- `lr_save_int()`：将变量以数字类型存入参数

```shell
int n=1314;
lr_save_int(n,"param1");
lr_log_message("%s",lr_eval_string("{param1}"));
```

- `lr_save_datetime()`：时间格式化，精确到秒，存入参数

```shell
lr_save_datetime("%Y-%m-%d %H:%M:%S", TIME_NOW, "currDateTime");
lr_output_message(lr_eval_string("{currDateTime}"));
```

- `lr_save_timestamp()`：将时间戳存入到参数，可精确到秒，毫秒，微秒

```shell
//以秒为单位
lr_save_timestamp("param", "DIGITS=10", LAST );
lr_output_message(lr_eval_string("{param}"));
//以毫秒为单位
lr_save_timestamp("param", LAST );
lr_output_message(lr_eval_string("{param}"));
//以微秒为单位
lr_save_timestamp("param", "DIGITS=16", LAST );
lr_output_message(lr_eval_string("{param}"));
```

- `web_save_timestamp_param()`：将时间戳存入到参数，固定为毫秒

```shell
web_save_timestamp_param("tStamp", LAST );//默认以毫秒为单位，将时间戳存入参数
lr_output_message(lr_eval_string("Timestamp: {tStamp}"));
```

- `lr_param_sprintf()`：格式化字符串，类似 sprintf

```shell
int index = 56;
char * suffix = "txt";
//底层采用 C 的 sprintf 函数
lr_param_sprintf ("LOG_NAME_PARAM", "log_%d.%s", index, suffix,100);
lr_output_message("The new file name is %s",lr_eval_string("{LOG_NAME_PARAM}"));
```

- `lr_convert_string_encoding()`：编码转换，可防止中文乱码

```shell
lr_convert_string_encoding("我是中文",LR_ENC_SYSTEM_LOCALE,LR_ENC_UTF8,"ReplyMessage");
```



### 5.2.检查关联类

该类函数一般跟在 web actions 函数前面。

- `web_reg_find()`：在行动函数前面搜索指字符串，默认找不到则失败。

```shell
//搜索指定字符串
web_reg_find("Search=Body",
    "Text=devt_token",
    LAST);
//搜索指定字符串(开始+结束)
web_reg_find("Search=Body",
    "TextPfx=\"devt_token\":\"",
    "TextSfx=\"",
    LAST);
//通配搜索
web_reg_find("Text/ALNUMLC=\"devt_toke^\"",
	LAST);
web_custom_request("login.do_3",
    "URL={host}/devt-service/api/login.do",
    "Method=POST",
    "Resource=0",
    "RecContentType=application/json",
    "Referer={host}/devt-web/",
    94
    "Snapshot=t290.inf",
    "Mode=HTML",
    "EncType=application/json",
    "Body={\"acctName\":\"admin\",\"acctPwd\":\"11111111\",\"type\":\"0\"}",
    LAST);
```

- `web_reg_save_param()`：将动态数据注册到参数。

```shell
//从服务端返回中取得数据,支持双右边界
web_reg_save_param("devtToken",
    "LB=\"devt_token\":\"",
    "RB=\"",
    LAST);
web_custom_request("login.do_3",
    "URL={host}/devt-service/api/login.do",
    "Method=POST",
    "Resource=0",
    "RecContentType=application/json",
    "Referer={host}/devt-web/",
    "Snapshot=t290.inf",
    "Mode=HTML",
    "EncType=application/json",
    "Body={\"acctName\":\"admin\",\"acctPwd\":\"11111111\",\"type\":\"0\"}",
    LAST);
```

- `web_reg_save_param_regexp()`：将动态数据注册到参数，比 web_reg_save_param 功能强大。

```shell
//从服务端返回中取得数据
web_reg_save_param_regexp(
    "ParamName=devtToken",
    "RegExp=(\"devt_token\":\".*?\")",
    "Group=0",
    SEARCH_FILTERS,
    "Scope=BODY",
    LAST);
web_custom_request("login.do_3",
    "URL={host}/devt-service/api/login.do",
    "Method=POST",
    "Resource=0",
    "RecContentType=application/json",
    "Referer={host}/devt-web/",
    "Snapshot=t290.inf",
    "Mode=HTML",
    "EncType=application/json",
    "Body={\"acctName\":\"admin\",\"acctPwd\":\"11111111\",\"type\":\"0\"}",LAST);
lr_log_message("取得 token 为:%s",lr_eval_string("{devtToken}"));
```

- `web_reg_save_param_json()`：以 json 方式解析动态数据并注册到参数(要求数据为 json)。

```shell
//从服务端返回中取得数据
web_reg_save_param_json(
    "ParamName=devtToken",
    "QueryString=$..devt_token",
    SEARCH_FILTERS,
    "Scope=BODY",
    LAST);
```

- `web_reg_save_param_xpath()`：以 xpath 方式解析动态数据并注册到参数(要求数据为 xml)。

```shell
web_reg_save_param_xpath( 
    "ParamName=CorrelationParameter", 	"QueryString=/LR_EXTENSION[1]/object[1]/object[1]/array[1]",
    "DFEs=JsonXml",
    "ReturnXML=Yes", 
    SEARCH_FILTERS, 
    "Scope=Body",
    LAST);
```

- `web_reg_save_param_attrib()`：以 html 文档方式解析动态数据并注册到参数。

```shell
//<INPUT TYPE="HIDDEN" NAME="field1" VALUE="Usj3xEEneBBTcIi6IXNHBBaz7D7ytfDmmbgOKjVuc59C">
web_reg_save_param_attrib(
    "ParamName=param1",
    "TagName=input",
    "Extract=value",
    "Name=field1",
    "Type=*",
    SEARCH_FILTERS,
    "IgnoreRedirections=No", 
    LAST);
```

### 5.3.日志类函数

- `lr_output_message()`：向日志文件、输出窗口和其他测试报告摘要发送消息。

```shell
lr_output_message("取得 token 为:%s",lr_eval_string("{devtToken}"));
```

- `lr_log_message()`：向日志文件发送消息。

```shell
lr_output_message("取得 token 为:%s",lr_eval_string("{devtToken}"));
```

- `lr_debug_message()`：向日志文件发送调试消息(需要设置日志级别)。

```shell
lr_debug_message(LR_MSG_CLASS_RESULT_DATA | LR_MSG_CLASS_PARAMETERS,lr_eval_string("1111{devtToken}"));
```

- `lr_error_message()`：向日志文件发送错误消息(红色显示)。

```shell
lr_error_message("取得 token 为:%s",lr_eval_string("{devtToken}"));
```



## 6.LR语言编程

​	LR虽然也支持JS、Java等语言进行编程，但由于C语言在LR的执行效率更高，所以一般建议使用C语言进行编程。

### 6.1.变量的定义

LoadRunner 中的变量即其实就是 C 语言变量，不过有以下约束

1. 变量可以定义在.h 文件中

2. 变量可以定义在 Action 函数外部

3. 变量可以定义在 Action 开始部分

4. Action 体内不可以定义变量

示例：

```c
int a1=0;
int a2=0;
char* p1;
char str2[]="string111111222";
Action()
{
    lr_log_message("%s",&str2[5]);
    p1=lr_eval_string("{param1}");
    lr_log_message("%s",p1);
    //int a3=0;//此处编译会报错
    return 0;
}
```



### 6.2.参数的操作

- **字符类参数的操作(未出现的参数可以在Parameters中定义，类型可为Custom**

```c
char str1[]="str111";
//参数的取值
lr_log_message("%s",lr_eval_string("{param1}"));
lr_log_message("%s",lr_eval_string("{param2}"));
//参数的赋值
lr_save_string(str1,"{param1}");
lr_save_string("new param2","{param2}");
//参数的取值
lr_log_message("%s",lr_eval_string("{param1}"));
lr_log_message("%s",lr_eval_string("{param2}"));
```



- **int类型参数的操作**

```c
//参数的取值
lr_log_message("%s",lr_eval_string("{param1}"));
lr_log_message("%s",lr_eval_string("{param2}"));
//参数的赋值
lr_save_int(11,"param1");
lr_save_int(22,"param2");
//参数的取值
lr_log_message("%s",lr_eval_string("{param1}"));
lr_log_message("%s",lr_eval_string("{param2}"));
```



- **参数的互转**

```c
char str1[]="str111";
char format1[200]="";
int n1=0;
//参数转字符串变量
strcpy(str1, lr_eval_string("{param1}"));
lr_output_message("%s", str1);
//参数转数值变量(参数统一为字符，故先转 int)
n1=atoi(lr_eval_string("{param2}"));
lr_output_message("%d", n1);
//格式化参数
sprintf(format1,"%s---%d",str1,n1);
lr_log_message("%s",format1);
//参数转参数
lr_save_string(lr_eval_string("{param1}"),"param2");
```



### 6.3.逻辑控制

​	C 语言中的顺序，分支，循环同样适用于 lr，C 语言中的函数同样可以在 lr 中使用，lr 中的函数可以定义在 Action 外部，也可以定义在.h 文件中

​	示例：

```c
void say(int flag){
    if(flag==0){
        lr_log_message("我是偶数");
    }else{
        lr_log_message("我是奇数");
    }
}
Action() {
	int i=0;
    for(i=0;i<10;i++){
    	if(i%2==0){
    		say(0);
    	}else{
    		say(1);
    	}
	}
return 0;
}
```



### 6.4.JS脚本

​	JS脚本在LR中使用可以通过两种方式：1.在C语言脚本中通过`web_js_run()`函数来运行；2.在脚本录制时，选用js为主体的脚本，效果和C语言一样。

​	在执行JS脚本前，需要让LR允许执行JS脚本。设置方式为：`Runtime Settings---Internet Protocol---Perferences`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221238340.png" style="zoom:50%;" />

- `web_js_run()`函数运行：

  - 创建一个脚本，取名为`js脚本`。
  - 准本`js1.js`文件，放置在工作目录下：

  ```javascript
  function test1(){
  	return new Date().getTime();
  }
  function test2(a,b){
  	return a+b;
  }
  ```

  - 准备` js2.js`文件放置到工作目录下：

  ```javascript
  function test3() {
      var user = '{ "id": 1, "name": "longge1" }';
      var tuser = JSON.parse(user);
      return tuser.name;
  }
  ```

  ![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221227616.png)

  - LR主脚本：

  ```c
  web_js_run("Code=test3()",
      "ResultParam=jsVal",
      SOURCES,"File=js1.js",
      ENDITEM,"File=js2.js",
      ENDITEM,
      LAST);
  lr_log_message("%s",lr_eval_string("{jsVal}"));
  ```

  正常运行：

  <img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221239733.png" alt="image-20230422123947582" style="zoom:50%;" />

- 直接使用JS录制脚本：

  - 录制一个简单脚本，在录制设置中将脚本语言更改为js：

  <img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221245114.png" style="zoom:33%;" />
  - 录制完成，生成js脚本：

  <img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221309824.png" alt="image-20230422130913666" style="zoom:50%;" />



### 6.5.Java over HTTP脚本

​	LR也可以使用Java作为脚本语言进行录制。但需要注意的是：`Java over HTTP`在Linux系统中不支持，所以必须采用压力机。

- 创建一个脚本，脚本类型选择`Java over HTTP`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221316892.png" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221317065.png" alt="image-20230422131735899" style="zoom:33%;" />

### 6.6.唯一序列

​	在一些场景压测时，需要唯一序列号，我们可以采用如下思路实现，我们可以让每一个 Vuser 的序列统一采用 VuserID+时间戳(时间戳不重复)。

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221357664.png" alt="image-20230422135743428" style="zoom:50%;" />

```c
char seq[20];
/**
* 取唯一序列
*/
char* GetSeq(){
    //先取第一个 Vuser 唯一前缀，保证不同线程之间不冲突
    char* start=lr_eval_string("{start}");
    web_save_timestamp_param("tamp",LAST);
    //保证线程内部不冲突
    sleep(1);
    sprintf(seq,"%s%s",lr_eval_string("{start}"),lr_eval_string("{tamp}"));
    return seq;
}
Action()
{
    int i=0;
    for(i=0;i<100;i=i+1)
    {
        lr_log_message("%s",GetSeq());
    }
    return 0;
}
```



### 6.7.实例考试-登录脚本

实战考试，录制一套完整的脚本，内容包括登录动作：

1、登陆逻辑放置在 actions 里面

2、易变的常量实现参数化(主机、用户名、密码、端口……)

3、登录实现规则关联

4、登陆采用 5 个以上账号

- 创建脚本，录制脚本，登录`管理平台`，优化脚本，只剩`login.do`的脚本：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221510875.png" alt="image-20230422151038579" style="zoom:50%;" />

- 将URL中`http://cfgjt.cn:8981`参数化，选中后右键---`Replace with Parameter---Create new Param`，参数类型为`custom`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221513678.png" alt="image-20230422151327532" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221514299.png" alt="image-20230422151411194" style="zoom:50%;" />

- 将脚本中的账号和密码参数化：`选中admin/11111111---右键Replace with Parameter---Create new Param`，参数类型为`File`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221518081.png" alt="image-20230422151855936" style="zoom:50%;" />

- 打开左边`Parameters`，设置5个账户，密码都是11111111：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221520879.png" alt="image-20230422152040763" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221521216.png" alt="image-20230422152116091" style="zoom:50%;" />

- 在登录脚本上方插入函数：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221523736.png" style="zoom:50%;" />

- 并开启/关闭事务，判断账户是否过期，全篇脚本如下：

```shell
Action()
{
	lr_start_transaction("login");

	web_reg_save_param_ex(
		"ParamName=devtToken",
		"LB=\"devt_token\":\"",
		"RB=\"",
		SEARCH_FILTERS,
		LAST);

	web_custom_request("login.do", 
		"URL={hostPort}/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={hostPort}/devt-web/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acctName\":\"{account}\",\"acctPwd\":\"{ped}\",\"type\":\"0\"}", 
		LAST);

	if(strcmp(lr_eval_string("{devtToken}"),"{devtToken}")==0) {
		lr_end_transaction("login",LR_FAIL);
	} else {
		lr_end_transaction("login", LR_AUTO);
	}

	return 0;
}
```

- 回放脚本，成功：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304221532429.png" alt="image-20230422153224244" style="zoom:50%;" />



### 6.8.实例考试-单查询脚本

实战考试，录制一套完整的脚本，内容包括至少一个单查询：

1、登陆放置在 init 里面，退出放置在 end，核心逻辑放置在 actions 里面

2、易变的常量实现参数化(主机、用户名、密码、端口……)

3、登录实现规则关联

4、选取一个查询条件设计为 20 种以上组合

5、查询设置为一个事务，并采用业务判断成功与否

- `vuser_init`脚本参考：

```shell
vuser_init()
{
	//注释
	lr_start_transaction("login");
	
	web_reg_save_param_ex(
		"ParamName=devtToken",
		"LB=\"devt_token\":\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_custom_request("login.do", 
		"URL={hostPort}/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={hostPort}/devt-web/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acctName\":\"{acctName}\",\"acctPwd\":\"{acctPwd}\",\"type\":\"0\"}", 
		LAST);
	if(strcmp(lr_eval_string("{devtToken}"),"{devtToken}")==0){
		lr_end_transaction("login",LR_FAIL);
	}else{
		lr_end_transaction("login",LR_PASS);		
	}
	return 0;
}
```

- `action`脚本参考：

```shell
Action()
{
	
	lr_start_transaction("query1");
	web_add_auto_header("Authorization",
	                    lr_eval_string("Bearer {devtToken}"));

	web_reg_find("Text=rspCode",
		LAST);

	web_custom_request("list.do_3", 
		"URL={hostPort}/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={hostPort}/devt-web/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"{qryText}\",\"treeId\":null}", 
		LAST);
	lr_end_transaction("query1",LR_AUTO);
	return 0;
}
```



### 6.9.实例考试-入库脚本

实战考试，录制一套完整的脚本，内容包括一次提交动作

1、登陆放置在 init 里面，退出放置在 end，核心逻辑放置在 actions 里面

2、易变的常量实现参数化(主机、用户名、密码、端口……)

3、登录实现规则关联

4、入库内容采用自定义函数模拟生成

5、入库设置为一个事务，并采用业务判断成功与否

- `vuser_init`脚本参考：

```shell
vuser_init()
{
	//ע��
	lr_start_transaction("login");
	
	web_reg_save_param_ex(
		"ParamName=devtToken",
		"LB=\"devt_token\":\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_custom_request("login.do", 
		"URL={hostPort}/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={hostPort}/devt-web/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acctName\":\"{acctName}\",\"acctPwd\":\"{acctPwd}\",\"type\":\"0\"}", 
		LAST);
	if(strcmp(lr_eval_string("{devtToken}"),"{devtToken}")==0){
		lr_end_transaction("login",LR_FAIL);
	}else{
		lr_end_transaction("login",LR_PASS);		
	}
	return 0;
}
```

- `action`脚本参考：

```shell
GetTitle(){
	web_save_timestamp_param("timestamp", 
		LAST);
	lr_save_string(lr_eval_string("标题{timestamp}"),"title");
}
Action()
{
	lr_start_transaction("save");
	web_add_auto_header("Authorization",
	                    lr_eval_string("Bearer {devtToken}"));
	GetTitle();
	web_reg_find("Text=rspCode",
		LAST);
	web_custom_request("save.do", 
		"URL={hostPort}/devt-service/devtMsg/save.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={hostPort}/devt-web/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"{title}\",\"type\":\"1\",\"msg\":\"内容\"}", 
		LAST);
	lr_end_transaction("save",LR_AUTO);
	return 0;
}
```



## 7.场景压测

​	LoadRunner 中场景(Scenario)是一种用来模拟大量用户操作的技术手段,通过配置和执行场景向服务器产生负载,验证系统各项性能指标是否达到。

用户要求；场景通过一系列的脚本组合，并通过 1 到多个压力机来产生负载

1. 了解一下 Controller 界面，大体熟悉一下各项菜单

2. 场景分两种，一种是计划场景，一种是目标场景

3. 场景先进行设计，然后再运行，运行时可查看各项性能指标，运行完成后可分析性能结果

场景压测分为计划场景和目标场景。

### 7.1.计划场景设计和压测

​	计划场景有成手动场景，是指按照测试人员的计划进行设计测试。

- 在已有的脚本中点击导航栏`Integrations---Create Controller Scenario`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304222102950.png" style="zoom:50%;" />

- 当创建好场景后，虚拟用户生成器会自动打开调度器`Controller`，此时我们就需要取按照测试人员的计划取设计计划表：

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304222113919.png)

- 设计好场景后就可以点击下方的菜单`run`运行：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304222121494.png" style="zoom:33%;" />



### 7.2.目标场景设计和压测

- 在`虚拟用户生成器`中按`7.1`的步骤创建目标场景压测：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304222123276.png" alt="image-20230422212305135" style="zoom:50%;" />

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304222130699.png)

- 设计好后可以点击`Run`进行运行。







### 7.3.组合场景压测

​	组合场景压测的方式和单个脚本大抵相同，只不过是将多个脚本进行组合后进行压测。

- 在打开`Controller`时，添加脚本，选择多个脚本，此处选择考试实例中的`test1,test2,test3`三个脚本：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304240959835.png" style="zoom:33%;" />

- 其他设置和单个脚本压测的方式一样：用户数、启动时间等。

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304241024391.png" alt="image-20230424102449190" style="zoom:33%;" />

### 7.4.分布式压测

​	在生产过程中，基本上选择的都是远程压测，即使用压力机压测Linux上的服务，这种方式即为分布式压测。

- 点击添加主机：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304241025859.png" style="zoom:33%;" />

- 名字为IP地址，系统为Linux，压力机路径为安装路径：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304241032069.png" style="zoom:50%;" />

- 其他压测步骤和之前一样。

## 8.结果分析

### 9.1.分析需求

1. TPS 越高，响应时间越小，性能越好，反之性能越差

2. 同一场景中，可以采用前后对比测试，来确定前后性能的好坏(一般伴随着程序有优化处理)

3. 同一场景中，可以采用横对比，来确定不同事务中性能好坏

*性能根源的分析和调优比较复杂，牵涉到操作系统以及各方面的知识*

*操作系统性能分析**&**调优**(CPU**，磁盘，**IO**，网络，中断，进程**&**文件数**)*

*JVM* *性能分析**&**调优**(JVM* *模型，**JAVA* *内存分析，**JAVA* *线程诊断**)*

*HTTP&TCP* *性能分析**&**调优**(**连接数，长连接，短连接**)*



### 9.2.输出报告

当测试场景测试完毕后，就可以分析结果了。这个结果通常交给第三方查看，步骤如下：

- 测试场景测试结束，点击菜单栏`Result---Analyze Result`，此时就会跳转到分析器：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304241039306.png" alt="image-20230424103927127" style="zoom:50%;" />

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304241041503.png)

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304241042053.png)