// FUN_180599090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180599090 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180599090(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4 [3];
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  iVar7 = 0;
  local_a8 = 0;
  (**(code **)(param_2 + 0x78))(param_2,local_98,4,local_a4);
  if (local_a4[0] < 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xa2;
  }
  else if ((local_a4[0] == 0) || (4 < local_a4[0])) {
LAB_1805991c1:
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    local_a8 = FUN_18059c0f0(param_1,0);
    if ((local_a8 == 0) && (plVar5 = *(longlong **)(param_1 + 0x2e0), 0 < local_a4[0])) {
      puVar6 = local_98;
      do {
        plVar5 = plVar5 + 1;
        pcVar2 = (char *)*puVar6;
        if (*pcVar2 == '/') {
          pcVar2 = pcVar2 + 1;
          *puVar6 = pcVar2;
        }
        uVar4 = *(int *)(puVar6 + 1) - (int)pcVar2;
        if (uVar4 == 0) goto LAB_1805991c1;
        if (*plVar5 != 0) {
          FUN_18057abd0(uVar1);
        }
        lVar3 = FUN_18057abe0(uVar1,uVar4 + 1,&local_a8);
        *plVar5 = lVar3;
        if (local_a8 != 0) break;
        FUN_18063aed0(lVar3,*puVar6,(ulonglong)uVar4);
        iVar7 = iVar7 + 1;
        *(undefined1 *)((ulonglong)uVar4 + lVar3) = 0;
        puVar6 = puVar6 + 3;
      } while (iVar7 < local_a4[0]);
    }
    *(int *)(param_2 + 0x18) = local_a8;
  }
}



