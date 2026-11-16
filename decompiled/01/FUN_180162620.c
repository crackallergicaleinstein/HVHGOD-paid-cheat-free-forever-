// FUN_180162620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162620 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180162620(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 local_res8 [8];
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if ((char)param_1[3] != '\0') {
    *(undefined1 *)(param_1 + 3) = 0;
    goto LAB_1801626b4;
  }
  plVar2 = (longlong *)param_1[1];
  if (*(longlong *)plVar2[7] == 0) {
LAB_180162671:
    uVar4 = (**(code **)(*plVar2 + 0x38))();
  }
  else {
    iVar1 = *(int *)plVar2[10];
    if (iVar1 < 1) goto LAB_180162671;
    *(int *)plVar2[10] = iVar1 + -1;
    pbVar3 = *(byte **)plVar2[7];
    *(byte **)plVar2[7] = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
  }
  if (uVar4 == 0xffffffff) {
    plVar2 = (longlong *)*param_1;
    lVar7 = (longlong)*(int *)(*plVar2 + 4);
    uVar6 = 4;
    if (*(longlong *)(lVar7 + 0x48 + (longlong)plVar2) != 0) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | *(uint *)(lVar7 + 0x10 + (longlong)plVar2) & 0x16 | 1;
    *(uint *)(lVar7 + 0x10 + (longlong)plVar2) = uVar6;
    uVar6 = uVar6 & *(uint *)(lVar7 + 0x14 + (longlong)plVar2);
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        pcVar8 = "ios_base::failbit set";
        if ((uVar6 & 2) == 0) {
          pcVar8 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar8 = "ios_base::badbit set";
      }
      uVar5 = FUN_1801597e0(local_48,1);
      FUN_1801596c0(local_38,pcVar8,uVar5);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_38,&DAT_1808d0f18);
    }
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar4;
LAB_1801626b4:
  if (*(int *)((longlong)param_1 + 0x14) != -1) {
    local_res8[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
    FUN_180157850(param_1 + 7,local_res8);
  }
  if (*(int *)((longlong)param_1 + 0x14) == 10) {
    param_1[6] = param_1[6] + 1;
    param_1[5] = 0;
  }
  return;
}



