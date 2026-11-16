// FUN_18057c640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057c640 */

uint FUN_18057c640(longlong *param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_2 + 0xc);
  uVar7 = param_3 & 0xffff;
  if ((int)param_3 < 1) {
    uVar7 = param_3;
  }
  local_res20[0] = param_4;
  uVar3 = FUN_18057a710(param_2,uVar7,local_res18,local_res10,local_res20);
  if (uVar3 == 0) {
    if ((*(uint *)(param_2 + 8) < local_res18[0]) ||
       (*(uint *)(param_2 + 8) - local_res18[0] < local_res10[0])) {
      return 8;
    }
    uVar3 = FUN_1805788b0(param_2,local_res18[0] + uVar1);
    if (uVar3 == 0) {
      uVar3 = 0;
      lVar5 = 0;
      if ((int)local_res10[0] < 1) {
        if ((int)local_res10[0] < 0) {
          return 6;
        }
      }
      else {
        lVar5 = (**(code **)(lVar2 + 8))(lVar2,local_res10[0]);
        uVar3 = 0x40;
        if (lVar5 != 0) {
          uVar3 = 0;
        }
      }
      if (uVar3 == 0) {
        uVar3 = FUN_180578100(param_2,lVar5,local_res10[0]);
        if (uVar3 == 0) {
          pcVar6 = "type1";
          if ((char)local_res20[0] != '\0') {
            pcVar6 = "t1cid";
          }
          uVar3 = 0;
          if ((int)uVar7 < 0) {
            uVar3 = uVar7;
          }
          uVar3 = FUN_18057c7d0(param_1,lVar5,local_res10[0],uVar3,pcVar6,param_6);
        }
        else if (lVar5 != 0) {
          (**(code **)(lVar2 + 0x10))(lVar2,lVar5);
        }
      }
    }
  }
  if ((char)uVar3 == '\x02') {
    if (*(code **)(param_2 + 0x20) == (code *)0x0) {
      if (*(uint *)(param_2 + 8) < uVar1) {
        return 0x55;
      }
    }
    else {
      iVar4 = (**(code **)(param_2 + 0x20))(param_2,uVar1,0,0);
      if (iVar4 != 0) {
        return -(uint)(iVar4 != 0) & 0x55;
      }
    }
    *(uint *)(param_2 + 0xc) = uVar1;
  }
  return uVar3;
}



