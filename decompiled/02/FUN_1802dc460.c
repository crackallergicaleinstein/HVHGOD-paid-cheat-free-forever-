// FUN_1802dc460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802dc460 */

longlong *
FUN_1802dc460(longlong *param_1,float *param_2,float param_3,int param_4,longlong param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ULONGLONG UVar5;
  longlong *plVar6;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined2 local_6ac;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 local_688;
  undefined2 local_684;
  undefined1 local_680 [1620];
  undefined4 local_2c;
  
  plVar1 = param_1 + 0xd40;
  plVar6 = param_1;
  if (param_1 != plVar1) {
    do {
      if ((((*(char *)((longlong)plVar6 + 0x1c) != '\0') && (*plVar6 == param_5)) &&
          ((int)plVar6[3] == param_4)) &&
         (((*(float *)(plVar6 + 4) == *param_2 &&
           (*(float *)((longlong)plVar6 + 0x24) == param_2[1])) &&
          ((*(float *)(plVar6 + 5) == param_2[2] && (*(float *)((longlong)plVar6 + 0x2c) == param_3)
           ))))) {
        UVar5 = GetTickCount64();
        plVar6[1] = UVar5;
        return plVar6;
      }
      plVar6 = plVar6 + 0xd4;
    } while (plVar6 != plVar1);
    plVar6 = param_1 + 0xd4;
    if (plVar6 != plVar1) {
      do {
        if ((ulonglong)plVar6[1] < (ulonglong)param_1[1]) {
          param_1 = plVar6;
        }
        plVar6 = plVar6 + 0xd4;
      } while (plVar6 != plVar1);
    }
  }
  local_6c8 = 0;
  local_6c0 = 0;
  local_6b8 = 0;
  local_6b0 = 0;
  local_6ac = 0;
  local_6a8 = 0;
  uStack_6a0 = 0x3f80000000000000;
  uStack_698 = 0;
  uStack_690 = 0x3f80000000000000;
  local_688 = 0;
  local_684 = 0;
  FUN_18063ab10(local_680,0,0x654);
  FUN_1802e33d0(local_680);
  local_2c = 0;
  FUN_18063aed0(param_1,&local_6c8,0x6a0);
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *param_1 = param_5;
  *(int *)(param_1 + 3) = param_4;
  UVar5 = GetTickCount64();
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *param_2;
  param_1[1] = UVar5;
  *(float *)(param_1 + 4) = fVar4;
  *(float *)((longlong)param_1 + 0x24) = fVar2;
  *(float *)(param_1 + 5) = fVar3;
  *(float *)((longlong)param_1 + 0x2c) = param_3;
  return param_1;
}



