clc;clear all;close all;
Fs=100;
ts=1/Fs;
a=1;b=1;Fc_1=1;Fc_2=3;
ind=1;
x1=[]; x2=[]; x3=[];
for n=0:Fs
    x1(ind)=a*sin(2*pi*Fc_1*n*ts);
    x2(ind)=b*sin(2*pi*Fc_2*n*ts);
    ind=ind+1;
end
x3=x1+x2;
t=0:Fs;
subplot(4,2,1);
plot(t,x1,'b--*');grid on;
title('plot of x1');
subplot(4,2,2);
plot(t,x2,'b--*');
title('plot of x2');
subplot(4,2,3);
plot(t,x3,'b--*');
title('plot of x3');
y1=[]; y2=[]; y3=[];
y1=-(x1/2); y2=-(x2/2); y3=-(x3/2);
ys=y1+y2;
yd=sum(abs(ys-y3));
subplot(4,2,4);
plot(t,y1,'b--*');
title('plot of y1');
subplot(4,2,5);
plot(t,y2,'b--*');
title('plot of y2');
subplot(4,2,6);
plot(t,y3,'b--*');
title('plot of y3');
subplot(4,2,7);
plot(t,ys,'b--*');
title('plot of ys');
subplot(4,2,8);
plot(t,yd,'b--*');
title('Linearity check');
disp('linearity status:');
if yd==0
    disp('Linear');
else
    disp('Non linear');
end