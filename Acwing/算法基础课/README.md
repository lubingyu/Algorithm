[TOC]



## 数据结构

### 栈

```c++
int stk[N], tt;
// 插入
stk[++tt] = x;
//弹出
tt--;
//判断栈是否为空
if (tt > 0) not empty
else empty

//栈顶
stk[tt];

```



## 队列

```c++
//在队尾插入元素，在队头弹出元素
int q[N], hh, tt = -1;

//插入
q[++tt] = x;

//弹出
hh++;

//判断队列是否为空
if (hh <= tt) not empty
else empty

//取出队头元素
q[hh];
```



## 动态规划

### 背包问题

#### 01背包

