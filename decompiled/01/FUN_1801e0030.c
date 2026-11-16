// FUN_1801e0030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e0030 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e0030(longlong *param_1,undefined8 *param_2,int param_3,int *param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char cVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  iVar3 = *param_4;
  iVar7 = 0;
  iVar12 = 0;
  cVar10 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar10 = '\x02';
  }
  local_48 = param_1;
  if (param_3 < iVar3) {
    if (cVar10 != '\x01') {
      if (cVar10 == '\x02') {
        iVar7 = iVar3 - param_3;
      }
      else if (cVar10 == '\x03') {
        iVar7 = (iVar3 - param_3) / 2;
        iVar12 = (iVar3 - iVar7) - param_3;
      }
      goto LAB_1801e00bf;
    }
    uVar8 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    iVar12 = iVar3 - param_3;
  }
  else {
LAB_1801e00bf:
    uVar8 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    puVar1 = (undefined1 *)((longlong)param_4 + 0xf);
    if (0 < iVar7) {
      puVar11 = puVar1 + uVar8;
      puVar5 = puVar1;
      do {
        for (; puVar5 != puVar11; puVar5 = puVar5 + 1) {
          uVar2 = *puVar5;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(undefined1 *)(param_2[2] + param_2[1]) = uVar2;
          param_2[2] = param_2[2] + 1;
        }
        iVar7 = iVar7 + -1;
        puVar5 = puVar1;
      } while (0 < iVar7);
      goto LAB_1801e0144;
    }
  }
  puVar11 = (undefined1 *)((longlong)param_4 + uVar8 + 0xf);
LAB_1801e0144:
  plVar6 = local_48;
  plVar9 = (longlong *)FUN_1801de1f0(param_6,local_40,param_2);
  puVar4 = (undefined8 *)*plVar9;
  puVar1 = (undefined1 *)((longlong)param_4 + 0xf);
  if (iVar12 < 1) {
    *plVar6 = (longlong)puVar4;
  }
  else {
    do {
      for (; puVar1 != puVar11; puVar1 = puVar1 + 1) {
        uVar2 = *puVar1;
        if ((ulonglong)puVar4[3] < puVar4[2] + 1) {
          (**(code **)*puVar4)(puVar4);
        }
        *(undefined1 *)(puVar4[2] + puVar4[1]) = uVar2;
        puVar4[2] = puVar4[2] + 1;
      }
      iVar12 = iVar12 + -1;
      puVar1 = (undefined1 *)((longlong)param_4 + 0xf);
    } while (0 < iVar12);
    *local_48 = (longlong)puVar4;
  }
}



