### 显式运行时链接
```shell
 gcc -o explicit_runtime_linking explicit_runtime_linking.c  -ldl
 ./explicit_runtime_linking /lib/x86_64-linux-gnu/libm.so.6 
```