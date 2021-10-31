#include <stdio.h>

int main(void){
    int year;
    scanf("%d",&year);
    if (year%400==0){
        printf("閏年\n");}
        else if (year%4==0&&year%100!=0){
            printf("閏年\n");}
            else if (year%100==0){
                printf("平年\n");
                printf("離%d最近的閏年是 %d 年 %d 年\n",year,year+4,year-4);}
  				else if(year%4==2&&((year+2)%400==0)){
                    printf("平年\n");
                	printf("離%d最近的閏年是 %d 年 %d 年\n",year,year+2,year-2);}
  					else if(year%4==2&&((year-2)%400==0)){
                    	printf("平年\n");
                    	printf("離%d最近的閏年是 %d 年 %d 年\n",year,year+2,year-2);}
  						else if(year%4==1&&((year-1)%400==0)){
                        	printf("平年\n");
                            printf("離%d最近的閏年是 %d 年\n",year,year-1);}
  							else if(year%4==3&&((year+1)%400==0)){
                            	printf("平年\n");
                            	printf("離%d最近的閏年是 %d 年\n",year,year+1);}
                    			else if(year%4==2&&((year+2)%100==0)){
                       			 	printf("平年\n");
                        			printf("離%d最近的閏年是 %d 年\n",year,year-2);}
                        			else if(year%4==2&&((year-2)%100==0)){
                            			printf("平年\n");
                            			printf("離%d最近的閏年是 %d 年\n",year,year+2);}
                            			else if(year%4==1&&((year-1)%100==0)){
                                			printf("平年\n");
                                			printf("離%d最近的閏年是 %d 年\n",year,year+3);}
                                			else if(year%4==3&&((year+1)%100==0)){
                                    			printf("平年\n");
                                    			printf("離%d最近的閏年是 %d 年\n",year,year-3);}
                                    			else if(year%4==3&&((year+1)%100!=0)){
                                       			 	printf("平年\n");
                                        			printf("離%d最近的閏年是 %d 年\n",year,year+1);}
                                        			else if(year%4==1&&((year-1)%100!=0)){
                                            			printf("平年\n");
                                            			printf("離%d最近的閏年是 %d 年\n",year,year-1);}
                                            			else if(year%4==2&&((year-2)%100!=0)){
                                                			printf("平年\n");
                                                			printf("離%d最近的閏年是 %d 年 %d 年\n",year,year+2,year-2);}
  															else if(year%4==2&&((year+2)%100!=0)){
                                                				printf("平年\n");
                                                				printf("離%d最近的閏年是 %d 年 %d 年\n",year,year+2,year-2);}
}