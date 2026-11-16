// FUN_1803f9ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f9ff0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803f9ff0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_4088 [32];
  undefined8 *local_4068;
  undefined1 local_4060 [72];
  undefined1 local_4018 [16384];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1803fa005;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_4088;
  *param_1 = FUN_1803ff4b0;
  param_1[1] = FUN_180182c50;
  param_1[2] = FUN_1803ffd80;
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x80c] = 0;
  *(undefined4 *)(param_1 + 0x80d) = 0;
  local_4068 = param_1;
  puVar9 = (undefined8 *)FUN_1803ff4b0(local_4060);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  param_1[4] = *puVar9;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar2 = puVar9[5];
  uVar3 = puVar9[6];
  uVar4 = puVar9[7];
  param_1[8] = puVar9[4];
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  if ((((*(char *)(param_1 + 0xb) != '\0') && (param_1[4] == param_1[3])) && (param_1[5] != 0)) &&
     (((param_1[6] != 0 && (param_1[7] != 0)) &&
      ((param_1[8] != 0 && ((param_1[9] != 0 && (*(int *)((longlong)param_1 + 0x54) - 1U < 0x200))))
      )))) {
    param_1[0x80c] = (longlong)*(int *)((longlong)param_1 + 0x54) << 5;
    puVar9 = param_1 + 0xc;
    cVar5 = (*(code *)param_1[1])(puVar9);
    if ((cVar5 != '\0') &&
       (((cVar5 = (*(code *)param_1[1])(local_4018,param_1[9],param_1[0x80c]), cVar5 != '\0' &&
         (iVar7 = memcmp(puVar9,local_4018,param_1[0x80c]), iVar7 == 0)) &&
        (*(char *)(param_1 + 0xb) != '\0')))) {
      plVar8 = (longlong *)(*(code *)*param_1)(local_4060,param_1[3]);
      if (((char)plVar8[7] == '\0') || (*(char *)(param_1 + 0xb) == '\0')) {
        bVar10 = (char)plVar8[7] == *(char *)(param_1 + 0xb);
      }
      else if (((*plVar8 == param_1[4]) && (plVar8[1] == param_1[5])) &&
              ((plVar8[2] == param_1[6] &&
               ((((plVar8[3] == param_1[7] && (plVar8[4] == param_1[8])) &&
                 (plVar8[5] == param_1[9])) &&
                (((int)plVar8[6] == *(int *)(param_1 + 10) &&
                 (*(int *)((longlong)plVar8 + 0x34) == *(int *)((longlong)param_1 + 0x54))))))))) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        puVar1 = (undefined8 *)
                 ((longlong)puVar9 + (longlong)(*(int *)((longlong)param_1 + 0x54) << 3) * 4);
        for (; puVar9 != puVar1; puVar9 = (undefined8 *)((longlong)puVar9 + 4)) {
          sVar6 = thunk_FUN_180624430(*(undefined4 *)puVar9);
          if (0 < sVar6) {
          }
        }
        *(undefined4 *)(param_1 + 0x80d) = 1;
      }
    }
  }
}



