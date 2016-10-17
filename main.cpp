//
//  main.cpp
//  ss
//
//  Created by s20151104679 on 16/10/10.
//  Copyright © 2016年 s20151104679 All rights reserved.
//

#include<stdio.h>
#define N 5
struct Node
{
    char name[40];
    int age;
    struct Node *next;
};
int main()
{
    struct Node *head,*p,*q;
    int i;
    head=new Node;
    head->next=0;
    q=head;
    scanf("%s",head->name);
    scanf("%d",&head->age);
    for(i=0;i<N;i++)
    {
        p=new Node;
        scanf("%s",p->name);
        scanf("%d",&p->age);
        p->next=0;
        q->next=p;
        q=p;
    }
    p=head;
    while(p)
    {
        printf("%s   %d  \n",p->name,p->age);
        p=p->next;
    }
    return 0;
}
