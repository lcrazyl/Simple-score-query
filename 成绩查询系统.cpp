#include<stdio.h>  //账号：001 密码：100
#define N 13  // 10个数据正常输入
main()
{
	int x,a[N]={0},i,j,t,q=0,num=0,w=0,s,k=0,m=10,user,pwd;//i,j为循环控制变量，x为switch语句输入值，t为交换所需变量,q,w为下标,s为成绩输入
   float ave;
  printf("请输入登录账号：");
  scanf("%d",&user);
  printf("请输入登录密码:");
  scanf("%d",&pwd);
if(user==001&&pwd==100)
  {printf("—————————成绩查询系统--——————--——\n");
    printf("|               ①-->成绩排序                    |\n");
    printf("|               ②-->成绩查询                    |\n");
	printf("|               ③-->成绩输出                    |\n");
	printf("|               ④-->平均分                      |\n");
	printf("|               ⑤-->最低分&&最高分              |\n");
	printf("|               ⑥-->成绩插入                     |\n"); 
    printf("|               ⑦-->成绩删除                    |\n");
	printf("|               ⑧-->成绩更新                    |\n");
	printf("|               〇-->退出                        |\n");
	printf("—————————————————————————\n");
	printf("请输入十个成绩：\n");
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	while(1){	
	printf("您要进行的操作是:\n");
scanf("%d",&x);
switch(x)
{
case 1:for(i=0;i<m;i++){                            //成绩排序
		for(j=1+i;j<N;j++)
		   if(a[j]>a[i])
		   {t=a[j];
		   a[j]=a[i];
		   a[i]=t;}}
		  printf("成绩从高到低：");
		  for(i=0;i<m;i++)
		  printf("%4.d",a[i]);
		  printf("\n");
		  printf("--------------------------------------------------------\n");
	break;
case 2:printf("请输入您要查询的成绩=");              //成绩查询
     scanf("%d",&s);
	 for(i=0;i<m;i++)
	 {if(a[i]==s)
	 break;}
	 if(i<m)
	 { k=i;
	 printf("若已排序则该成绩为第%d名\n",k+1);}
	     else
	printf("该成绩不存在!\n");
		 printf("--------------------------------------------------------\n");
	break;
case 3:for(j=0;j<m;j++)                                //输出成绩
	printf("%4.d",a[j]);
	printf("\n");
	printf("--------------------------------------------------------\n");
	break;
case 4:   for(i=0;i<m;i++)                                                 //平均分
	num+=a[i];
     ave=(double)num/m;
	printf("平均分=%.2f\n",ave);
	printf("--------------------------------------------------------\n");
	break;
case 5:  for(i=0;i<m;i++)                                                 //最大/小值
		if(a[q]>a[i])
			q=i;
		for(i=0;i<N;i++)
		if(a[w]<a[i])
		w=i;
        printf("最高分=%d，第%d名，最低分=%d，第%d名\n",a[w],w+1,a[q],q+1);
		printf("--------------------------------------------------------\n");
       break;
case 6:printf("请输入您要插入的成绩：");                                 //成绩插入
	scanf("%d",&s);
{for(i=0;i<m;i++)
if(s>a[i])
break;
for(j=m;j>=i;j--)
a[j+1]=a[j];
a[i]=s;
m++;
for(i=0;i<m;i++)
printf("%4.d",a[i]);
printf("\n");}
printf("--------------------------------------------------------\n");
	break;
case 7:                                                                    //成绩删除
	printf("请输入要删除的成绩：");
	scanf("%d",&s);
	for(i=0;i<m;i++)
	if(s==a[i])
		break;
	if(i<m)
    {for(j=i;j<m-1;j++)
		a[j]=a[j+1];
	m--;
	for(i=0;i<m;i++)
	printf("%4.d",a[i]);
	printf("\n");}
		else
		printf("该成绩不存在！\n");
		printf("--------------------------------------------------------\n");
		break;
case 8:    for(i=0;i<m;i++)          //成绩更新
		   if(a[i]<60)
			   a[i]=60;
	for(i=0;i<m;i++)	
		printf("%4.d",a[i]);
	printf("\n");
	printf("--------------------------------------------------------\n");
	break;
case 0: return 0;                                    //退出
default:printf("您输入有误，请重新输入!\n");
}

}
}
else
printf("登录失败!\n"); }
 