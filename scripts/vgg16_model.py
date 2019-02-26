import os, sys
from keras.applications.vgg16 import VGG16
vgg_model = VGG16(weights='imagenet')
vgg_model.save('vgg.h5')
# convert model
sys.path.append(os.path.join('..', 'lib', 'frugally-deep', 'keras_export'))
from convert_model import convert
convert('vgg.h5', 'vgg.json')
