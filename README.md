# eLab-Object-Classification

Final project for Electronics Lab -- Vera and Ryan proposed a prototype to classify different types of fruits.

### Training Data
A color sensor (APDS9960) will be attached to an Arduino Uno to collect training data (RGB) for different types of fruits in various orientations. About 500 rows is collected for each fruit. Data is then cleaned up using Excel and pandas to be prepared for training and testing.

### ML Models
We tested K-Nearest Neighbors and a feed-forward neural network in an attempt to classify fruits. KNN is trained on the Arduino using C, with limited training data due to memory. Neural Network is trained on Jupyter Notebook using Python with the full training dataset.

### Results
We tested our prototype by feeding the sensor an orientation of a fruit, and a prediction along with probability will be outputted onto our computer screen. KNN has an accuracy of ~70% whereas the neural network has an accuracy ~96%.

Applications of such prototype can be used in a conveyor belt setting at a farm or food factory. A conveyor belt carrying various types of fruits can be identified and rerouted to a specific basket. 

Improvements for the model can include the use of more features. Such features can be proximity to sensor, curvature of the fruit, and other computer vision related features and techniques.
