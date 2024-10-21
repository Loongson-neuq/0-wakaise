#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
    //abc
    if (a > b && b > c)
    {
        result.max = a;
        result.min = b;
        result.min = c;
    }
    //acb
    else if (a > c && c > b)
    {
        result.max = a;
        result.min = c;
        result.min = b;
    }
    //bac
    else if (b > a && a > c)
    {
        result.max = b;
        result.min = a;
        result.min = c;
    }
    //bca
    else if (b > c && c > a)
    {
        result.max = b;
        result.min = c;
        result.min = a;
    }
    //cab
    else if (c > a && a > b)
    {
        result.max = c;
        result.min = a;
        result.min = b;
    }
    //cba
    else if (c > b && b > a)
    {
        result.max = c;
        result.min = b;
        result.min = a;
    }
    return;
}
