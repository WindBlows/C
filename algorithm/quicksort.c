//
// Created by Gao on 2017/10/9.
//
//#include <stdio.h>
//int a[101], n;
//void quicksort(int left, int right)
//{
//    int i, j, t, temp;
//    if (left > right)
//        return;
//    temp = a[left];
//    i = left;
//    j = right;
//    while (i != j)
//    {
//        while (a[j] >= temp && i < j)
//            j--;
//        while (a[i] <= temp && i < j)
//            i++;
//        if(i < j)
//        {
//            t = a[i];
//            a[i] = a[j];
//            a[j] = t;
//        }
//    }
//    a[left] = a[i];
//    a[i] = temp;
//    quicksort(left, i-1);
//    quicksort(i+1, right);
//    return;
//}
//
//int main()
//{
//    int i, j;
//    scanf("%d", &n);
//    for (i = 1; i < n; i++)
//        scanf("%d", &a[i]);
//    quicksort(0,n-1);
//
//    for (i = 1; i <= n; i++) {
//        printf("%d", a[i]);
//        getchar();
//        return 0;
//    }
//}
#include<stdio.h>
int a[101], n;
void quickSort(int left,int right)
{
    int i=left;
    int j=right;
    int temp=a[left];
    int t;
    if(left>=right)
    return;
    while(i!=j)
    {
        while(i<j&&a[j]>=temp)
        j--;
        while(i<j&&a[i]<=temp)
        i++;
        if (i < j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i]=temp;
    quickSort(left,i-1);
    quickSort(i+1,right);
}

int main()
{
    int i,j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quickSort(0,n-1);
    for(j=0;j<n;j++)
        printf("%4d",a[j]);
    getchar();
    return 0;
}