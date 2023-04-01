# Loadrunner的使用



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

### 