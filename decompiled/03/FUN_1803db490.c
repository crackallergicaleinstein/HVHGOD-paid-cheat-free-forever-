// FUN_1803db490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803db490 */

char * FUN_1803db490(undefined8 param_1,uint param_2)

{
  char *local_58 [11];
  
  local_58[0] = "generic";
  local_58[1] = "head";
  local_58[2] = "chest";
  local_58[3] = "stomach";
  local_58[4] = "left arm";
  local_58[5] = "right arm";
  local_58[6] = "left leg";
  local_58[7] = "right leg";
  local_58[8] = "neck";
  if (param_2 < 9) {
    return local_58[(int)param_2];
  }
  return "generic";
}



