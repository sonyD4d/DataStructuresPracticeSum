#!/usr/bin/env python
# coding: utf-8

# In[10]:


import tensorflow as tf
from tensorflow.keras import datasets , layers , models
import matplotlib.pyplot as plt
import numpy as np


# In[2]:


(X_train, y_train), (X_test,y_test) = datasets.cifar10.load_data()
X_train.shape


# In[3]:


X_test.shape


# In[4]:


y_train = y_train.reshape(-1,)
y_train[:5]


# In[5]:


y_test = y_test.reshape(-1,)


# In[6]:


classes = ["airplane","automobile","bird","cat","deer","dog","frog","horse","ship","truck"]


# In[ ]:





# In[7]:


def plot_sample(X, y, index):
    #plt.figure(figsize = (15,2))
    plt.imshow(X[index])
    plt.xlabel(classes[y[index]])


# In[8]:


plot_sample(X_train, y_train, 0)


# In[9]:


ann = models.Sequential([
        layers.Flatten(input_shape=(32,32,3)),
        layers.Dense(3000, activation='relu'),
        layers.Dense(1000, activation='relu'),
        layers.Dense(10, activation='sigmoid')    
    ])

ann.compile(optimizer='SGD',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

ann.fit(X_train, y_train, epochs=5)


# In[10]:


ann = models.Sequential([
        layers.Flatten(input_shape=(32,32,3)),
        layers.Dense(3000, activation='relu'),
        layers.Dense(1000, activation='relu'),
        layers.Dense(10, activation='sigmoid')    
    ])

ann.compile(optimizer='SGD',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

ann.fit(X_test, y_test, epochs=5)


# In[10]:


cnn = models.Sequential([
    layers.Conv2D(filters=32, kernel_size=(3, 3), activation='relu', input_shape=(32, 32, 3)),
    layers.MaxPooling2D((2, 2)),
    
    layers.Conv2D(filters=64, kernel_size=(3, 3), activation='relu'),
    layers.MaxPooling2D((2, 2)),
    
    layers.Flatten(),
    layers.Dense(64, activation='relu'),
    layers.Dense(10, activation='softmax')
])


# In[11]:


cnn.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])


# In[12]:


cnn.fit(X_test ,y_test, epochs=50)


# In[16]:


cnn.fit(X_test, y_test, epochs=10)


# In[ ]:




