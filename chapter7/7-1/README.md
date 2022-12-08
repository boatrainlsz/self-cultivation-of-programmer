### 1. 使用GCC将Lib.c编译成共享对象Lib.so

```shell
gcc -shared -fPIC -o Lib.so Lib.c
```

### 2. 分别编译链接Program1.c和Program2.c

```shell
gcc -o Program1 Program1.c ./Lib.so
gcc -o Program2 Program2.c ./Lib.so
```

### 3. 运行并查看进程的虚拟内存空间分布

```shell
./Program1 &
cat /proc/`pidof Program1`/maps
```

### 4. readelf查看Lib.so的装载属性

```shell
readelf -l Lib.so
```
