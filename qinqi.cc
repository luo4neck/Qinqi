#include<stdlib.h>
#include<iostream>

using namespace std;

void appear_relation(int rank, int rel);
void speak_relation(int rank, int rel);

int main()
{
	bool finish = 1;
	while(finish)
	{
        srand48(time(NULL)); // rank of the relation..
        int rank = lrand48()%8 + 1;
        int rel = lrand48()%9; // relation to me..
        
        appear_relation(rank, rel);
        cout<<" 出现了！"<<endl;
        speak_relation(rank, rel);
        

        cout<<endl<<endl<<"是否结束游戏？请输入数字并回车："<<endl<<"1）继续游戏"<<endl<<"2) 结束游戏"<<endl;
	    
        int check_finish;
        cin>>check_finish;
        if (check_finish>1) finish = 0;
    }
    cout<<endl<<"感谢使用！"<<endl;
    return 0;
}

void appear_relation(int rank, int rel)
{
    if( rank == 1) cout<<"大";
    else cout<<rank;
    
    
    if (rel == 0) cout<<"伯";
    else if(rel == 1) cout<<"叔";
    else if(rel == 2) cout<<"姑";
    else if(rel == 3) cout<<"姨";
    else if(rel == 4) cout<<"舅";
    else if(rel == 5) cout<<"表哥";
    else if(rel == 6) cout<<"表嫂";
    else if(rel == 7) cout<<"表姐";
    else if(rel == 8) cout<<"表姐夫";
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
    
    switch(sen)
    {
        case 0: cout<<"我儿子一个月挣一万呢！"<<endl; break;
        case 1: cout<<"我女儿可做到经理了呢！"<<endl; break;
        case 2: cout<<"我给你介绍一个基佬吧！"<<endl; break;
        case 3: cout<<"我女儿男朋友是银行经理呢！"<<endl; break;
        case 4: cout<<"我儿子刚买了标志307！"<<endl; break;
        case 5: cout<<"要早点办酒席啊！现在酒席不好订啊！我女儿结婚的时候就在天上人间呢！"<<endl; break;
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
    
//    appear_relation(rank, rel);
    cout<<endl<<"真是皆大欢喜！！";
}
