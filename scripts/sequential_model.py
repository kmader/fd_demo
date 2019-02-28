import os, sys
# convert model
sys.path.append(os.path.join('lib', 'frugally-deep', 'keras_export'))
from convert_model import convert

from keras import layers, models
s_mod = models.Sequential()
s_mod.add(layers.Conv1D(3, (3,), input_shape=(None, 1), padding='same'))
print(s_mod.predict(np.zeros((1, 10, 1))).shape)
s_mod.save('simple_seq.h5')

convert'simple_seq.h5', 'simple_seq.json')
