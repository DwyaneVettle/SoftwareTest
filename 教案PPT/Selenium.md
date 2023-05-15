# Selenium

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305121129914.png" style="zoom:50%;" />

<img src="https://gitee.com/zou_tangrui/note-pic/raw/master/img/202305121130292.png" alt="image-20230512113001177" style="zoom:50%;" />

​	Selenium 是一个用于 Web 应用程序测试的工具。是一个开源的 Web 的自动化测试工具，最初是为网站自动化测试而开发的，可以按指定的命令自动操作，不同是 Selenium 可以直接运行在浏览器上，它支持所有主流的浏览器，支持的浏览器包括 Edge，Mozilla Firefox，Safari，Google Chrome，Opera 等。

​	Selenium包含：

- WebDriver：内部实现了对浏览器的各种操作，对外提供了多语言的 API，如果是学习 Selenium，我们 90%的时间应该在和 WebDriver 打交道
- Selenium-ide：本质是一个浏览器的插件，可以进行自动化脚本的录制与回放，辅助我们生成一些脚本
- Selenium-grid：提供了分布式执行环境，用例同时在多个浏览器同时执行，提搞测试效率

## 1.安装

```shell
pip install selenium
```

- WebDriver 安装

  https://www.selenium.dev/documentation/webdriver/getting_started/install_drivers，选择相应浏览器，下载最接近的 webDriver，下载完之后，我们将驱动放在$PATH 目录下面，或者直接放在 Python 目录下面，如：D:/Software/Python310\Scripts，IE 也是支持的， 不过现在不建议大家学习，毕竟 IE 已经退出历史舞台

  谷歌浏览器驱动：https://chromedriver.storage.googleapis.com/index.html  安装对应浏览器版本。

测试脚本：

```python
from time import sleep
from selenium import webdriver
from selenium.webdriver.common.by import By
driver = webdriver.Chrome()
# 浏览器最大化
driver.maximize_window()
# 设置隐式等待
driver.implicitly_wait(10)
driver.get("https://www.baidu.com")
# 定位元素并发送文本内容
driver.find_element(By.ID, "kw").send_keys("test")
sleep(2)
# 页面按钮点击交互
driver.find_element(By.ID, "su").click()
sleep(2)
driver.quit()
```

