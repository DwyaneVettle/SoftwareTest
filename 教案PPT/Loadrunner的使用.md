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



### 2.4.安装压力机

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

```shell
# 备份本地yum源
mv /etc/yum.repos.d/CentOS-Base.repo /etc/yum.repos.d/CentOS-Base.repo.bak  

# 下载yum源配置文件到本地
wget -O /etc/yum.repos.d/CentOS-Base.repo https://mirrors.aliyun.com/repo/Centos-7.repo

# 清空并更新缓存
yum clean all && yum makecache

# 安装依赖
yum install glibc.i686 libstdc++.i686 ncurses-libs.i686 keyutils-libs.i686 glib2.i686 libnsl.i686 libidn.i686 -y

# 如出现多库版本问题，可执行如下命令，然后再执行上面的安装
yum update --setopt=protected_multilib=false 依赖名（如glib2）-y 

# 再次安装
sh installer.sh
```

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

- 点击回放，分析日志：

