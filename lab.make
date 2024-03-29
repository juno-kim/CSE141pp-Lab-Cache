CMD_LINE_ARGS=--engine papi --stat INSTRUCTIONS_RETIRED --stat MEM_LOAD_RETIRED:L1_MISS --mat-small 96 --mat-large 896 --iterations 10
include $(ARCHLAB_ROOT)/compile.make

%.gprof: %.exe gmon.out
	prof %.exe > %.gprof

.PHONY: run-submission
run-submission: default

%.exe : %.o ../lab_files/main.o
	$(CXX) $(LDFLAGS) $^ -o $@

