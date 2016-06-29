The Graphic Box Library
========================

[![Join the chat at https://gitter.im/waruqi/gbox](https://badges.gitter.im/waruqi/gbox.svg)](https://gitter.im/waruqi/gbox?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

GBOX is a mutli-platform c graphic library, ui and game engine for unix, windows, mac, ios, android, etc.

contact
-------

- email:   	    
	- waruqi@gmail.com
	- waruqi@126.com
- source:  	    
	- [github](https://github.com/waruqi/gbox)
	- [coding](https://coding.net/u/waruqi/p/gbox/git)
	- [oschina](http://git.oschina.net/tboox/gbox)
- website: 	    
	- http://www.tboox.org
	- http://www.tboox.net
- download:
 	- [github](https://github.com/waruqi/gbox/archive/master.zip)
 	- [coding](https://coding.net/u/waruqi/p/gbox/git/archive/master)
 	- [oschina](http://git.oschina.net/tboox/gbox/repository/archive?ref=master)
- document:
	- [github](https://github.com/waruqi/gbox/wiki/)
	- [oschina](http://git.oschina.net/tboox/gbox/wikis/home)
- qq(group):    
	- 343118190

donate
------

####alipay
<img src="http://www.tboox.net/ruki/alipay.png" alt="alipay" width="128" height="128">

####paypal
<a href="http://tboox.net/%E6%8D%90%E5%8A%A9/">
<img src="https://www.paypalobjects.com/en_US/i/btn/btn_donate_SM.gif" alt="paypal">
</a>

build
-----

please install xmake first: [xmake](https://github.com/waruqi/xmake)


```bash
	// build for the host platform
    cd ./gbox
    xmake

	// build for the iphoneos platform
    cd ./gbox
    xmake f -p iphoneos 
    xmake
    
	// build for the android platform
    cd ./gbox
    xmake f -p android --ndk=xxxxx
    xmake
```
