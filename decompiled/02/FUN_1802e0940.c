// FUN_1802e0940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e0940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e0940(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  short sVar11;
  uint uVar12;
  undefined1 auStack_648 [32];
  undefined **local_628;
  char *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_648;
  sVar11 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_2 + 4));
  if ((((((sVar11 < 1) && (sVar11 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 1)), sVar11 < 1))
        && (sVar11 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_2 + 0xc)), sVar11 < 1)) &&
       ((sVar11 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 2)), sVar11 < 1 &&
        (sVar11 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_2 + 0x14)), sVar11 < 1)))) &&
      ((sVar11 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 3)), sVar11 < 1 &&
       ((sVar11 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_2 + 0x1c)), sVar11 < 1 &&
        (sVar11 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 4)), sVar11 < 1)))))) &&
     ((sVar11 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_2 + 0x24)), sVar11 < 1 &&
      (sVar11 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 5)), sVar11 < 1)))) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    if (0x3f < (ulonglong)((*(longlong *)(param_1 + 0x120) - lVar2) / 0x48)) {
      FUN_18063aed0(lVar2,lVar2 + 0x48,*(longlong *)(param_1 + 0x120) - (lVar2 + 0x48));
      *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + -0x48;
      LOCK();
      iVar4 = DAT_180bb8aa0 + 1;
      UNLOCK();
      uVar12 = DAT_180bb8aa0 + 1;
      DAT_180bb8aa0 = iVar4;
      if ((uVar12 == 1) || ((uVar12 & 0x3f) == 0)) {
        FUN_18063ab10(local_618,0,0x600);
        local_620 = (char *)0x40;
        local_628 = (undefined **)CONCAT44(local_628._4_4_,uVar12);
        FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"drops=%u limit=%zu action=drop_oldest");
        local_628 = &PTR_180700558;
        if (local_618[0] != '\0') {
          local_628 = (undefined **)&DAT_1806bcfc0;
        }
        local_620 = local_618;
        FUN_1800f6900(2);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x120);
    if (puVar3 == *(undefined8 **)(param_1 + 0x128)) {
      FUN_1802eadc0((longlong *)(param_1 + 0x118),puVar3,param_2);
    }
    else {
      uVar1 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      *puVar3 = *param_2;
      puVar3[1] = uVar1;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      uVar1 = param_2[8];
      puVar3[4] = uVar7;
      puVar3[5] = uVar8;
      puVar3[6] = uVar9;
      puVar3[7] = uVar10;
      puVar3[8] = uVar1;
      *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 0x48;
    }
  }
}



