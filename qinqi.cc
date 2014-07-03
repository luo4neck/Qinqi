#include<stdlib.h>
#include<iostream>

using namespace std;

void appear_relation(int rank, int rel);
void speak_relation(int rank, int rel);
int up_level(int level, double r); 
void shuzi(int num);

int main()
{
	bool finish = 1;
	int level = 0;
	while(finish)
	{
        srand48(time(NULL)); // rank of the relation..
        int rank = lrand48()%8 + 1;
        int rel = lrand48()%9; // relation to me..
        
        appear_relation(rank, rel);
        cout<<" 出现了！"<<endl;
        speak_relation(rank, rel);
       

		level = level + up_level(level, drand48());
        
		cout<<endl<<endl<<"是否结束游戏？请输入数字并回车："<<endl<<"1）继续游戏"<<endl<<"2) 结束游戏"<<endl;
	    
        int check_finish;
        cin>>check_finish;
        if (check_finish>1) finish = 0;
   		
		if (level > 22)  
		{
			finish = 0; 
			cout<<"你家亲戚死完了！"<<endl;
		}
	}
    cout<<endl<<"感谢使用！"<<endl;
    return 0;
}

int up_level(int level, double r)
{
	int add = 1;
	if(r > 0.25) 
	{	
		cout<<endl<<"杀死一个亲戚！升到 ";
	}
	else
	{	
		add = 2;
		cout<<endl<<"杀的漂亮！系统奖励跳一级！升到 ";
	}
	
	level = level + add;
	if (level < 7 )			cout<<"小学",	shuzi(level);
	else if (level < 10)	cout<<"初中",	shuzi(level - 6);
	else if (level < 13)	cout<<"高中",	shuzi(level - 9);
	else if (level < 17)	cout<<"本科",	shuzi(level - 12);
	else if (level < 19)	cout<<"研究生",	shuzi(level - 16);
	else					cout<<"博士",	shuzi(level - 18);
	cout<<"年级！"<<endl;
	
	return add;
}

void shuzi(int num)
{
    switch(num)
    {
        case 1: cout<<"一"; break; 
        case 2: cout<<"二"; break; 
        case 3: cout<<"三"; break; 
        case 4: cout<<"四"; break; 
        case 5: cout<<"五"; break; 
        case 6: cout<<"六"; break; 
        case 7: cout<<"七"; break; 
        case 8: cout<<"八"; break; 
    }
}

void appear_relation(int rank, int rel)
{
   	shuzi(rank);
    switch(rel)
    {
        case 0: cout<<"伯"; break; 
        case 1: cout<<"叔"; break; 
        case 2: cout<<"姑"; break; 
        case 3: cout<<"姨"; break; 
        case 4: cout<<"舅"; break; 
        case 5: cout<<"表哥"; break; 
        case 6: cout<<"表嫂"; break; 
        case 7: cout<<"表姐"; break; 
        case 8: cout<<"表姐夫"; break; 
    }
}

void speak_relation(int rank, int rel)
{
    cout<<"它舔着囧脸说：";

    srand(time(NULL));
    int sen = lrand48()%6;//6 句不同的话。。
    
    switch(sen)
    {
        case 0: cout<<"一个月拿多少钱啊？"<<endl; break;
        case 1: cout<<"在公司做什么职位啊？"<<endl; break;
        case 2: cout<<"有男朋友没有啊？"<<endl; break;
        case 3: cout<<"男朋友多大了？做啥的？"<<endl; break;
        case 4: cout<<"买房没啊？买车没啊？"<<endl; break;
        case 5: cout<<"什么时候结婚啊？"<<endl; break;
    }
    
    cout<<"你说："<<endl;
    char ans[100];
    cin>>ans;
    
    appear_relation(rank, rel);
    cout<<"说：";
    switch(sen)
    {
        case 0: cout<<"我儿子一个月挣一万呢！"<<endl; break;
        case 1: cout<<"我女儿可做到经理了呢！"<<endl; break;
        case 2: cout<<"我给你介绍一个基佬吧！"<<endl; break;
        case 3: cout<<"我女儿男朋友是银行经理呢！"<<endl; break;
        case 4: cout<<"我儿子刚买了标志307！"<<endl; break;
        case 5: cout<<"要早点办酒席啊！现在酒席不好订啊！我女儿结婚的时候就在南馆呢！"<<endl; break;
    }
    
    cout<<"你说："<<endl;
    cin>>ans;
    switch(sen)
    {
        case 0: cout<<"你说着就捅死了它 "; break;
        case 1: cout<<"你说着就日死了它 "; break;
        case 2: cout<<"你说着就骂死了它 "; break;
        case 3: cout<<"你说着就把它一板砖乎死了它 "; break;
        case 4: cout<<"你说着就把它的头按在水缸里淹死了 "; break;
        case 5: cout<<"你说着就说出他儿子卖屁眼的消息把他气死了"; break;
    }
    
    cout<<endl<<"真是皆大欢喜！！";
}
