import matplotlib.pyplot as plt

plt.figure()
data_1 = np.loadtxt("dx1_explicito.dat")
data_2 = np.loadtxt("dx2_explicito.dat")
data_3 = np.loadtxt("dx3_explicito.dat")
data_4 = np.loadtxt("dx1_implicito.dat")
data_5 = np.loadtxt("dx2_implicito.dat")
data_6 = np.loadtxt("dx3_implicito.dat")

x1_e= data_1[:,0]
y1_e= data_1[:,1]

x2_e= data_2[:,0]
y2_e= data_2[:,1]

x3_e= data_3[:,0]
y3_e= data_3[:,1]

x1_i= data_4[:,0]
y1_i= data_4[:,1]

x2_i= data_5[:,0]
y2_i= data_5[:,1]

x3_i= data_6[:,0]
y3_i= data_6[:,1]

plt.figure(figsize=(5,5))
plt.subplot(2,2,1)
plt.title("Explicito")
plt.plot(x1_e, y1_e)
plt.plot(x2_e, y2_e)
plt.plot(x3_e, y3_e)
plt.xlabel('x')
plt.ylabel('y')


plt.subplot(2,2,2)
plt.title("implicito")
plt.plot(x1_i, y1_i)
plt.plot(x2_i, y2_i)
plt.plot(x3_i, y3_i)
plt.xlabel('x')
plt.ylabel('y')

plt.savefig("grafica.png")


