if(EXISTS "/home/user/Документы/453502/ОАиП/LR6/Task_1/main[1]_tests.cmake")
  include("/home/user/Документы/453502/ОАиП/LR6/Task_1/main[1]_tests.cmake")
else()
  add_test(main_NOT_BUILT main_NOT_BUILT)
endif()
