// FUN_18059ae40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059ae40 */

int FUN_18059ae40(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  short sVar1;
  undefined4 uVar2;
  longlong lVar3;
  short sVar4;
  undefined4 uVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
  local_res8[0] = FUN_18059baf0(param_2,"%!PS-AdobeFont",0xe);
  if (((local_res8[0] == 0) ||
      (((char)local_res8[0] == '\x02' &&
       (local_res8[0] = FUN_18059baf0(param_2,"%!FontType",10), local_res8[0] == 0)))) &&
     (local_res8[0] = FUN_1805788b0(param_2,0), local_res8[0] == 0)) {
    uVar5 = 0;
    sVar1 = FUN_180578720(param_2,local_res10);
    sVar4 = 0;
    local_res10[0] = local_res10[0];
    if (local_res10[0] == 0) {
      if ((ushort)(sVar1 + 0x7fffU) < 2) {
        uVar2 = FUN_1805785e0(param_2,local_res10);
        uVar5 = 0;
        if (local_res10[0] == 0) {
          uVar5 = uVar2;
        }
      }
      sVar4 = sVar1;
    }
    local_res8[0] = local_res10[0];
    if (local_res8[0] == 0) {
      if (sVar4 == -0x7fff) {
        *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
      }
      else {
        local_res8[0] = FUN_1805788b0(param_2,0);
        if (local_res8[0] != 0) goto LAB_18059afc5;
        uVar5 = (undefined4)param_2[1];
      }
      if (param_2[4] == 0) {
        param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
        *(undefined4 *)(param_1 + 0x14) = uVar5;
        *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
        local_res8[0] = FUN_180578910(param_2);
        if (local_res8[0] == 0) {
LAB_18059b03a:
          lVar3 = param_1[0x13];
          param_1[1] = lVar3;
          param_1[2] = (ulonglong)*(uint *)(param_1 + 0x14) + lVar3;
          *param_1 = lVar3;
          return 0;
        }
      }
      else {
        lVar3 = FUN_18057abe0(param_3,uVar5,local_res8);
        param_1[0x13] = lVar3;
        if ((local_res8[0] == 0) &&
           (local_res8[0] = FUN_180578100(param_2,lVar3,uVar5), local_res8[0] == 0)) {
          *(undefined4 *)(param_1 + 0x14) = uVar5;
          goto LAB_18059b03a;
        }
      }
    }
  }
LAB_18059afc5:
  if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
    FUN_18057abd0(param_3,param_1[0x13]);
    param_1[0x13] = 0;
    return local_res8[0];
  }
  return local_res8[0];
}



