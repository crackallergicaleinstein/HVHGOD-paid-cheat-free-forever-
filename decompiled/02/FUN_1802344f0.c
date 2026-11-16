// FUN_1802344f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802344f0 */

int FUN_1802344f0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  bool bVar7;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  int local_18 [4];
  
  local_res18[0] = param_3;
  lVar6 = (longlong)(int)param_2;
  iVar1 = *(int *)(param_1 + 0xaf0 + lVar6 * 4);
  local_18[1] = 4;
  local_18[0] = 0;
  piVar5 = local_18;
  if (-1 < iVar1) {
    piVar5 = (int *)(param_1 + 0xaf0 + lVar6 * 4);
  }
  piVar3 = local_18 + 1;
  if (iVar1 < 5) {
    piVar3 = piVar5;
  }
  lVar4 = (longlong)*piVar3;
  if (0 < lVar4) {
    pcVar2 = (char *)((lVar4 + (lVar6 + 2) * 4) * 0x70 + param_1);
    do {
      if (*pcVar2 != '\0') {
        local_res8[0] = (~param_2 & 1) + 100;
        iVar1 = *(int *)(pcVar2 + 0x68);
        piVar5 = local_res10;
        if (-1 < iVar1) {
          piVar5 = (int *)(pcVar2 + 0x68);
        }
        bVar7 = SBORROW4(local_res8[0],iVar1);
        local_res8[0] = local_res8[0] - iVar1;
        goto LAB_180234581;
      }
      lVar4 = lVar4 + -1;
      pcVar2 = pcVar2 + -0x70;
    } while (0 < lVar4);
  }
  local_res8[0] = (~param_2 & 1) + 100;
  piVar5 = local_res10;
  if (-1 < param_3) {
    piVar5 = local_res18;
  }
  bVar7 = SBORROW4(local_res8[0],param_3);
  local_res8[0] = local_res8[0] - param_3;
LAB_180234581:
  local_res10[0] = 0;
  piVar3 = local_res8;
  if (bVar7 == local_res8[0] < 0) {
    piVar3 = piVar5;
  }
  return *piVar3;
}



