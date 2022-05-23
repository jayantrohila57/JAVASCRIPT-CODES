from time import sleep
from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.options import options
from bs4 import BeautifulSoup
import pandas as pd 


df = pd.read_csv("https://covid19.who.int/WHO-COVID-19-global-table-data.csv")
df = df.drop(['WHO Region','CASES - cumulative total per 100000 population',
              'Cases - newly reported in last 7 days per 100000 population'  ,
              'Death - cumulative total per               100000 population' ,
              'Death - newly reported in 7 days','Deaths - newly reported in last 7 days per 100000 population',
              'Transmission Classification'],axis=1)
df = df.set_index('Name')

df['Recovered']=df['Cases - cumulative total']-df['Deaths - cumulative total']
df=df.drop(['Cases - cumulative total','Deaths - newly reported in last 24 hours'],axis=1)

inp=input ('Enter Country:')
df.loc[[inp]]

import matplotlib.paylot as plt 
recovered=df.at [inp,          'Deaths - cumulative total']
Deaths=df.at[inp,             'Deaths - cumulative total']
new24=df.at[inp,'cases - newly reported in last 24 hours']
new7=df.at[inp, 'cases - newly reported in last   7 days']
f=plt.figure(figsize=(8,8))
font ={'family' : 'normal',
        'weight': 'bold',
        'size'  :  12 }
plt.rc('font', **font)
plt.rcParams.update({'text.color' : "black" , 'axes.labelcolor' : "black"})
plt.pie([recovered , Deaths , new24 , new7] , labels=['recovered' , 'Deaths' , 'new Cases /24hr' , 'new Cases /7days'] ,
        colors=['blue' , 'red' , 'pink' , 'orange'],
        explode=(0.2,0.02,0.2,0.1) , stratangle=180 , autopct = '%1.1f%%')

plt.title(inp)
plt.legend()
plt.show()