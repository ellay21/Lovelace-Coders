problem analysis

input:transmission rate,file size in bytes

output: time in second,minute,hours and days

procedure :

--> declare a variable named fileSizeInBytes,transmissionRate,timeInSeconds,timeInMinutes,timeInHours ,timeInDays

--> prompt a message that instruct the user to insert the file size in byte

--> reading the value of transmission rate and the amount of file size in bytes 

--> calculating the time in second by performing this  operation

 timeInSeconds = (double)fileSizeInBytes / transmissionRate
 
--> converting the time in second to minute,hour and days using this formulas respectively
   
    timeInMinutes = timeInSeconds / 60
    
    timeInHours = timeInMinutes / 60
    
    timeInDays = timeInHours / 24
    
--> printing the time in second,minute,hour and days 

algorithm in psedocode

step 1: start

step 2: read transmission rate and file size in bytes

step 3: timeInSeconds = (double)fileSizeInBytes / transmissionRate

step 4: timeInMinutes = timeInSeconds / 60;

step 5: timeInHours = timeInMinutes / 60;

step 6: timeInDays = timeInHours / 24;

step 7: print timeInSeconds

step 8: print timeInMinutes

step 9: print timeInHours

step 10: print timeInDays
 
step 11: stop
