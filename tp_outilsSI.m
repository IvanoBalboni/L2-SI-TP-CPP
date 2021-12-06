clear
tau = 0.8e-2;
T = 2.5;
df = 1.10e-2;
f = (0:df:40);
lf = length(f);


for k = 1:lf
    H(k) = 1/(1 + 1j*2*pi*f(k)*tau);
    modH(k)= 1/sqrt(1 + (2*pi*f(k)*tau)^2);
    modHdb(k) = 20 * log10(modH(k));
    angH(k) = angle(H(k));
end
fc = 1/tau*2*pi
subplot(4,1,1)
    semilogx(f,H)
subplot(4,1,2)
    semilogx(f,modH)
subplot(4,1,3)
    semilogx(f,modHdb)
subplot(4,1,4)
    semilogx(f,angH)
