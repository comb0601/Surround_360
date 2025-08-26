#pragma once

#define __CUBOX__

#define CUBOX_DEFAULT_CAM_PROP_8BIT
#define CUBOX_DEFAULT_CAM_PROP_FPS    15 // 15 ~ 20 OK

#define CUBOX_RPODUCER_SIZE     1   // default is 1(only single producer work, if > 2 runtime error)
#define CUBOX_CONSUMER_SIZE     2   // default is 2(should be matched with Unpacker --bin_list parameter)

#define CUBOX_CHECK_CONS_WRITE_TIME
#define CUBOX_CHECK_PROD_cameraSerial_OVERWRITE

#define CUBOX_TIME_START(var1)  auto __##var1 = std::chrono::system_clock::now();
#define CUBOX_TIME_ELAPSED(var1) \
  std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - __##var1)
#define CUBOX_TIME_PRINT(tag, var1) \
          auto __uptime_##var1 = chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now().time_since_epoch()).count(); \
          cout << "[cubox] " << tag << " --> " << CUBOX_TIME_ELAPSED(s1).count() << "(ms) " << endl;
          // cout << tag << " --> " << CUBOX_TIME_ELAPSED(s1).count() << "(ms) " << __uptime_##var1 << endl;
