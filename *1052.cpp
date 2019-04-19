
#include<cstdio>
#include<iostream
#include<vector>
#include<string>

using namespace std;

 

int main(){

	

	//输入处理 

	vector<vector<string> >ans;

	for(int i=0 ;i<3 ;i++){

		

		vector<string>temp;	 

		string s;

		getline(cin,s);

		

		for(int j=0 ;j<s.length() ;j++){

			

			if(s[j]=='['){

				for(int k=j+1 ;k<s.length() ;k++){

					

					if(s[k]==']'){

						temp.push_back(s.substr(j+1,k-j-1));

						break;

					}

				}

			}

		}

		ans.push_back(temp);

	}

	

	//输出处理 

	int n;

	int a,b,c,d,e;

	scanf("%d",&n);

 

	for(int i=0 ;i<n ;i++){

		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

		if(a<1||b<1||c<1||d<1||e<1||a>ans[0].size()||b>ans[1].size()||c>ans[2].size()||d>ans[1].size()||e>ans[0].size()){

			printf("Are you kidding me? @\\/@\n");

		}else{

//			printf("%s(%s%s%s)%s\n",ans[0][a-1],ans[1][b-1],ans[2][c-1],ans[1][d-1],ans[0][e-1]);

			cout<<ans[0][a-1]<<"("<<ans[1][b-1]<<ans[2][c-1]<<ans[1][d-1]<<")"<<ans[0][e-1]<<endl;			

		}

	}

	

	

	return 0;

} 

