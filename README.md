# 切换校内DNS的小工具
校内DNS服务器有的时候无法正常解析微信和腾讯视频等网站的域名，可通过此工具切换至114通用DNS，解决由于校内DNS被污染而导致的网站无法访问等问题

## 使用方法
### 下载工具
```
D:\> git clone https://github.com/Spico197/SwitchDNS.git
D:\> cd SwitchDNS/
```

### 使用预编译版本（x86_64）
```
D:\Switch\> SwitchDNS -o // 切换至外网114DNS
D:\Switch\> SwitchDNS -l // 切换至校园网DNS
```

### 自行编译
```
gcc SwitchDNS.c -o SwitchDNS
```
