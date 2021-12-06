clear
tau = 0.8e-2;
T = 2.5;

dt = 2.5e-3;
t = (-T:dt:T);
a1 = 2;
f1 = 10;
phi1 = 0;

df = 1.10e-2;
f = (0:df:40);
omega = 1j*2*pi*f;
lf = length(f);

for k = 1:lf
    H(k) = 1/(1 + omega(k)*tau);
%    modH(k)= 1/sqrt(1 + (omega*tau)^2);
%    modHdb(k) = 20 * log10(modH(k));
%    angH(k) = angle(H(k));
end

x = a1 * sin(2*pi*f1*t + phi1);
X = (a1/2j)*(omega);%mauvaise formule
%fc = 1/tau*2*pi
%subplot(4,1,1)
%    semilogx(f,H)
%subplot(4,1,2)
%    semilogx(f,modH)
%subplot(4,1,3)
%    semilogx(f,modHdb)
%subplot(4,1,4)
%    semilogx(f,angH)


subplot(2,1,1)
plot(t,x)
subplot(2,1,2)
plot(f,X)