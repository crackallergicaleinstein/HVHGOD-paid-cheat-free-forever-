// FUN_180580870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180580870 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180580870(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auStack_2848 [32];
  uint local_2828;
  int local_2824 [3];
  undefined8 local_2818;
  longlong local_2810;
  undefined8 local_2808;
  undefined8 uStack_2800;
  undefined8 local_27f8;
  undefined8 local_27f0;
  undefined8 uStack_27e8;
  undefined8 local_27e0;
  undefined4 local_27d8;
  undefined1 local_27d4 [908];
  undefined8 local_2448;
  undefined1 local_2440 [64];
  uint local_2400 [1100];
  undefined4 local_12d0;
  undefined8 *local_12c8;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_2848;
  FUN_18063ab10(local_2440,0,0x1180);
  local_2448 = *(undefined8 *)(param_2 + 0x98);
  iVar3 = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  pcVar5 = *(char **)((&PTR_DAT_18066cf80)[*(int *)(*param_1 + 8)] + 0x20);
  cVar2 = *pcVar5;
  if (cVar2 != '\0') {
    do {
      while (cVar2 == ' ') {
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar5;
      }
      pcVar5 = (char *)FUN_1805871d0(pcVar5,param_1,local_2824,&local_2828);
      if ((local_2828 < 2) && (iVar3 = local_2824[0], local_2824[0] != 0)) goto LAB_180580950;
      cVar2 = *pcVar5;
    } while (cVar2 != '\0');
    if (iVar3 != 0) {
LAB_180580950:
      iVar3 = FUN_180574690(param_2,iVar3,1);
      if ((iVar3 == 0) && (lVar10 = *(longlong *)(param_2 + 0x78), *(short *)(lVar10 + 0x9a) != 0))
      {
        local_2818 = 0;
        local_27e0 = 0;
        local_27f0 = 0;
        uStack_27e8 = 0;
        FUN_18063ab10(local_27d4,0,0x38c);
        local_27d8 = (undefined4)param_1[8];
        local_12c8 = &local_2818;
        local_2808 = 0x1000000010000;
        uStack_2800 = 0;
        local_27f8 = 0;
        local_12d0 = 0;
        local_2810 = param_2;
        iVar3 = FUN_180581fe0(&local_2448,lVar10 + 0x98);
        if (iVar3 == 0) {
          lVar10 = (longlong)param_1 + 0x44;
          iVar3 = 0;
          puVar11 = local_2400;
          do {
            uVar9 = 0;
            local_2828 = 0;
            iVar4 = FUN_180584320(&local_2448,iVar3);
            if (iVar4 != 0) break;
            FUN_180584c10(&local_2448,0,0,iVar3);
            uVar6 = *(ulonglong *)(puVar11 + 2);
            uVar1 = uVar6 + (ulonglong)*puVar11 * 0x48;
            if (uVar6 < uVar1) {
              do {
                uVar7 = *(ulonglong *)(uVar6 + 0x20);
                if (((uVar7 != 0) && (*(ulonglong *)(uVar7 + 0x20) == uVar6)) && (uVar6 < uVar7)) {
                  iVar4 = (int)*(short *)(uVar6 + 2) - (int)*(short *)(uVar7 + 2);
                  if (uVar9 < 0x10) {
                    iVar8 = (int)*(short *)(uVar7 + 2) - (int)*(short *)(uVar6 + 2);
                    if (-1 < iVar4) {
                      iVar8 = iVar4;
                    }
                    uVar7 = (ulonglong)uVar9;
                    uVar9 = uVar9 + 1;
                    *(int *)(lVar10 + (uVar7 + 1) * 0xc) = iVar8;
                  }
                }
                uVar6 = uVar6 + 0x48;
              } while (uVar6 < uVar1);
              local_2828 = uVar9;
            }
            FUN_180587320(&local_2828,lVar10 + 0xc);
            iVar3 = iVar3 + 1;
            *(uint *)(lVar10 + 8) = local_2828;
            puVar11 = puVar11 + 0x226;
            lVar10 = lVar10 + 0x1c4;
          } while (iVar3 < 2);
        }
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x4c) == 0) {
    iVar3 = (int)param_1[8] * 0x32;
    iVar3 = (int)((iVar3 >> 0x1f & 0x7ffU) + iVar3) >> 0xb;
  }
  else {
    iVar3 = (int)param_1[10];
  }
  *(int *)((longlong)param_1 + 0x114) = iVar3;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(int *)(param_1 + 0x22) = iVar3 / 5;
  if ((int)param_1[0x42] == 0) {
    iVar3 = (int)param_1[8] * 0x32;
    iVar3 = (int)((iVar3 >> 0x1f & 0x7ffU) + iVar3) >> 0xb;
  }
  else {
    iVar3 = *(int *)((longlong)param_1 + 0x214);
  }
  *(int *)((longlong)param_1 + 0x2d4) = iVar3 / 5;
  *(int *)(param_1 + 0x5b) = iVar3;
  *(undefined1 *)((longlong)param_1 + 0x2dc) = 0;
  FUN_180581e90(&local_2448);
}



