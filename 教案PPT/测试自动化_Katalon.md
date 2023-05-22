# 测试自动化_Katalon

## 1.概述

​	Katalon界面的自动化测试工具，简称KS，于2015年推出。是开源的，提供的版本有免费的版本，还有企业版是收费的。如下图。其中的服务台功能应该是持续继承的支持。可试用一个月。

![image-20230515195210443](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305151952776.png)

​	最初是支持Web UI、Andoroid、IOS程序测试的，后来从7.0.0版本开始又增加了支持windows应用程序。包括：Universal Windows Platform (UWP), Windows Forms (WinForms), Windows Presentation Foundation (WPF), and Classic Windows (Win32)。

官网地址：https://www.katalon.com/
官网帮助文档：https://docs.katalon.com/katalon-studio/docs/overview.html
说明，官网有多个工具，KS是其中的一个，还有其关联的插件、工具等。



## 2.下载与安装

​	直接在官网的下载即可，需要先注册(官网地址：下·/)，需要记住这个账号，在下载的安装后也是需要登录的。同时，使用邮件注册，需要到邮箱处激活。

​	然后下载即可。地址：https://www.katalon.com/download/

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305151954106.png" alt="image-20230515195448945" style="zoom:50%;" />

​	这个是免安装的，解压缩，然后如下图，katalon.exe。点击即可运行。运行后，需要输入上面的账号，进行激活。

```shell
Michealzou@126.com
Ztr940407!
```



## 3.WebUI录制

- 创建工程步骤：`File--New--Project`：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152002823.png" alt="image-20230515200249635" style="zoom:50%;" />

工程结构：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152017634.png" alt="image-20230515201757475" style="zoom:50%;" />

- 录制步骤：可点击`Action--Record`录制，也可点击菜单栏录制按钮录制：此处录制web：

**选项公网测试地址：http://cfgjt.cn:8981/devt-web    用户名admin，密码11111111**

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152007421.png" style="zoom: 50%;" />

​	录制开始前可能要求更新**浏览器驱动**，点击OK即可。

- 录制完成后，保存脚本：

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152011772.png)

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152014010.png" style="zoom:50%;" />

- 录制完成后，为确保没有问题，可以回放脚本，如果没有问题，下方日志没有报错：

![](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152016389.png)





## 4.抓取元素

​	抓取元素的方式可以通过`Action--Spy`来抓取，也可以通过菜单栏按钮抓取，此处抓取web为例：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152020037.png" alt="image-20230515202008920" style="zoom: 50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152022153.png" alt="image-20230515202229002" style="zoom: 50%;" />

- 选中要抓取的元素，按下`(Alt+`)`就可以抓取到元素

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152025308.png" style="zoom:50%;" />

- 选中了元素后，可以高亮显示看看有没有定位到，并可以保存

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152029063.png" style="zoom:50%;" />

## 5.手动编写测试用例

​	点击右边菜单栏`Test Cases--New--Test Case`，创建一个名为`login`的用例，此处我们添加一个打开浏览器的操作，在`Item`处输入`Open Browser`，在`Input`处输入要打开的URL，然后点击`Run`:

![image-20230515203836221](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152038461.png)

​	用例创建好后，可以按`4`的步骤定位元素并进行抓取（为好识别抓取的名字，可以更改名字），抓取好后可以点击`Add`添加`web keywords`。`Item`输入`Send Keys`，`Object`输入要编辑的对象，`Input`输入值，点击按钮的`Item`为`Click`，详细如下：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152052114.png" style="zoom:50%;" />



​	设置完值后就可点击`Run`运行，观察是否正常。



**此外，Katalon也支持脚本的编写，在下方菜单中点击`Script`即可编写脚本：**

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305152056017.png" style="zoom:50%;" />







## 6.APP测试

环境准备

想要用Katalon做APP的UI自动化，需要准备：

1、jdk用1.8

2、nodejs

3、安装Appium

```shell
npm install -g appium@1.18.3
```

- 检查是否安装成功：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221450603.png" alt="image-20230522145050482" style="zoom:50%;" />

- 配置sdk环境（下载地址：https://www.androiddevtools.cn/）

  - 把 Android Sdk的build-tools和platform-tools拷贝到Katalon安装目录下：

  ![image-20230522145153277](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221451355.png)

- 指定Appium安装路径：

  ![image-20230522145306592](C:/Users/HP/AppData/Roaming/Typora/typora-user-images/image-20230522145306592.png)

- 真机调试/

- 测试机准备

  1.用 usb 线连接到电脑

  2.进入手机设置- 系统-开发人员选项

  3.打开 开发者选项

  4.打开 USB 调试

  5.在电脑上执行 adb 命令：adb devices -l

  **备注**：打开开发者选项还有一个方法是：

  ·进入手机设置- 系统-关于手机

  ·连续（不断）点击版本号（7 次以上），进入开发者模式

  ·退出到上级菜单，开发者模式中，打开 usb 调试

  6.检查设备是否连接成功。

- Spy Mobile：点击 Spy Mobile，选择已连接的设备

![image-20230522145522040](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221455146.png)

- 选择 apk，点击 Start，开始录制：

![image-20230522145543668](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221455761.png)



- 点击 Capture Object：

![image-20230522145604668](https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221456842.png)



- 点击 Stop，停止录制：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221456722.png" alt="image-20230522145629619" style="zoom:50%;" />



- 编写用例：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221457392.png" alt="image-20230522145741200" style="zoom:50%;" />



- 定位元素：手机连接在电脑上，点击 Spy Mobile

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221458703.png" alt="image-20230522145804626" style="zoom: 50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221458724.png" alt="image-20230522145819626" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221458127.png" alt="image-20230522145844018" style="zoom:50%;" />

- 点击 Capture Object，使 katalon 加载的界面和手机显示的界面同步：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221459412.png" alt="image-20230522145908268" style="zoom:50%;" />

- 同理可得，如果 katalon 加载的界面和手机显示的界面不同步，就点击 Capture Object。因为有时候你会手动去点击手机显示的界面，假如我现在将手机界面点击到了个人中心，此时我需要去点击 Capture Object，katalon 加载的界面才会到个人中心：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221459311.png" alt="image-20230522145938187" style="zoom:50%;" />

- 选中 “同意”，勾选方框，点击 Capture Object，定位到元素：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221459143.png" alt="image-20230522145958992" style="zoom:50%;" />



- 添加到对象库：

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305221500086.png" alt="image-20230522150025945" style="zoom:50%;" />