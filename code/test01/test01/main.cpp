//
//  main.cpp
//  test01
//
//  Created by 王冬晖 on 2021/1/20.
//  Copyright © 2021 Alex. All rights reserved.
//

#include <iostream>
#include <thread>

using namespace std;

void print_01()
{
    cout<<"thread starts here"<<endl;

    cout<<"thread is running function print_01"<<endl;

    cout<<"thread ends here"<<endl;

    cout<<" "<<endl;
}

void print_02()
{
    cout<<"thread starts here"<<endl;

    cout<<"thread is running function print_02"<<endl;

    cout<<"thread ends here"<<endl;

    cout<<" "<<endl;
}

int main(int argc, const char * argv[]) {

    thread thread_01(print_01); //该线程的入口是myprint（） thread 是个类

    thread thread_02(print_02);

    thread_01.join();//join阻塞主线程让主线程等待子线程执行完毕,让主线程和自线程汇合然后程序继续往下进行

    thread_02.join();

    //输出的顺序是不确定的 应该是不加控制的情况下并发的输出不确定是谁

    cout<<"sample text"<<endl;

    return 0;
}
