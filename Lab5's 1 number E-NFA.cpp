#include<stdio.h>
#include<string.h>
char input[20];
int l;
int flag;
void q3(int i)
{
	if(input[i]=='\0')
	{
		flag=1;
	}
}
	void q2(int i)
	{
		if(i<l)
		{
			if(input[i]=='1')
			{
				++i;
				q3(i);
			}
		}
	}
	void q1(int i)
	{
		if(i<l)
		{
			if(input[i]=='0')
			{
				i++;
				q2(i);
			}
		}
    }
void q0(int i)
    {
        if(i<l)
        {
            if(input[i]=='0')
            {
                i++;
                q0(i);
            }
            else if(input[i]=='1')
            {
                i++;
                q0(i);
            }
              else if(input[i]=='E')
            {
                i++;
                q1(i);
            }
        }    
}
	int main()
	{
		printf("\nEnter a string:\n");
		gets(input);
		l=strlen(input);
		int i=0;
		flag=0;
		q0(i);
		if(flag==1)
		{
			printf("Accepted");
		}
		else
		{
			printf("Rejected");
		}
		return 0;
	}
