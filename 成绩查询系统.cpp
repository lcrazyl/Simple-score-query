#include<stdio.h>  //�˺ţ�001 ���룺100
#define N 13  // 10��������������
main()
{
	int x,a[N]={0},i,j,t,q=0,num=0,w=0,s,k=0,m=10,user,pwd;//i,jΪѭ�����Ʊ�����xΪswitch�������ֵ��tΪ�����������,q,wΪ�±�,sΪ�ɼ�����
   float ave;
  printf("�������¼�˺ţ�");
  scanf("%d",&user);
  printf("�������¼����:");
  scanf("%d",&pwd);
if(user==001&&pwd==100)
  {printf("�������������������ɼ���ѯϵͳ--������������--����\n");
    printf("|               ��-->�ɼ�����                    |\n");
    printf("|               ��-->�ɼ���ѯ                    |\n");
	printf("|               ��-->�ɼ����                    |\n");
	printf("|               ��-->ƽ����                      |\n");
	printf("|               ��-->��ͷ�&&��߷�              |\n");
	printf("|               ��-->�ɼ�����                     |\n"); 
    printf("|               ��-->�ɼ�ɾ��                    |\n");
	printf("|               ��-->�ɼ�����                    |\n");
	printf("|               ��-->�˳�                        |\n");
	printf("��������������������������������������������������\n");
	printf("������ʮ���ɼ���\n");
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	while(1){	
	printf("��Ҫ���еĲ�����:\n");
scanf("%d",&x);
switch(x)
{
case 1:for(i=0;i<m;i++){                            //�ɼ�����
		for(j=1+i;j<N;j++)
		   if(a[j]>a[i])
		   {t=a[j];
		   a[j]=a[i];
		   a[i]=t;}}
		  printf("�ɼ��Ӹߵ��ͣ�");
		  for(i=0;i<m;i++)
		  printf("%4.d",a[i]);
		  printf("\n");
		  printf("--------------------------------------------------------\n");
	break;
case 2:printf("��������Ҫ��ѯ�ĳɼ�=");              //�ɼ���ѯ
     scanf("%d",&s);
	 for(i=0;i<m;i++)
	 {if(a[i]==s)
	 break;}
	 if(i<m)
	 { k=i;
	 printf("����������óɼ�Ϊ��%d��\n",k+1);}
	     else
	printf("�óɼ�������!\n");
		 printf("--------------------------------------------------------\n");
	break;
case 3:for(j=0;j<m;j++)                                //����ɼ�
	printf("%4.d",a[j]);
	printf("\n");
	printf("--------------------------------------------------------\n");
	break;
case 4:   for(i=0;i<m;i++)                                                 //ƽ����
	num+=a[i];
     ave=(double)num/m;
	printf("ƽ����=%.2f\n",ave);
	printf("--------------------------------------------------------\n");
	break;
case 5:  for(i=0;i<m;i++)                                                 //���/Сֵ
		if(a[q]>a[i])
			q=i;
		for(i=0;i<N;i++)
		if(a[w]<a[i])
		w=i;
        printf("��߷�=%d����%d������ͷ�=%d����%d��\n",a[w],w+1,a[q],q+1);
		printf("--------------------------------------------------------\n");
       break;
case 6:printf("��������Ҫ����ĳɼ���");                                 //�ɼ�����
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
case 7:                                                                    //�ɼ�ɾ��
	printf("������Ҫɾ���ĳɼ���");
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
		printf("�óɼ������ڣ�\n");
		printf("--------------------------------------------------------\n");
		break;
case 8:    for(i=0;i<m;i++)          //�ɼ�����
		   if(a[i]<60)
			   a[i]=60;
	for(i=0;i<m;i++)	
		printf("%4.d",a[i]);
	printf("\n");
	printf("--------------------------------------------------------\n");
	break;
case 0: return 0;                                    //�˳�
default:printf("��������������������!\n");
}

}
}
else
printf("��¼ʧ��!\n"); }
 