// FUN_180474680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180474680 */

undefined1 (*) [16] FUN_180474680(undefined1 (*param_1) [16],int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  int iVar7;
  int local_res10 [2];
  undefined4 uVar8;
  
  iVar7 = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  uVar8 = 1;
LAB_1804746c7:
  do {
    if (DAT_180b909b0 == 0) {
      iVar4 = 0x47;
    }
    else {
      iVar4 = (int)(*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4);
    }
    if (iVar4 <= iVar7) {
      return param_1;
    }
    uVar6 = (ulonglong)iVar7;
    local_res10[0] = iVar7;
    if (DAT_180b909b0 == 0) {
      ppuVar5 = &PTR_s_Glock_18_180797be0 + uVar6 * 2;
    }
    else {
      if ((ulonglong)
          (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <= uVar6)
      {
LAB_180474816:
                    /* WARNING: Subroutine does not return */
        FUN_18047c010();
      }
      ppuVar5 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x28) + uVar6 * 0x10);
    }
    cVar1 = *(char *)(ppuVar5 + 1);
    if (param_2 < 5) {
      cVar3 = '\0';
    }
    else if (param_2 < 10) {
      cVar3 = '\x01';
    }
    else if (param_2 < 0xf) {
      cVar3 = '\x02';
    }
    else if (param_2 == 0xf) {
      cVar3 = '\x06';
    }
    else if (param_2 == 0x10) {
      cVar3 = '\a';
    }
    else if (param_2 == 0x11) {
      cVar3 = '\b';
    }
    else if (param_2 == 0x12) {
      cVar3 = '\x04';
    }
    else if (param_2 == 0x13) {
      cVar3 = '\x05';
    }
    else {
      cVar3 = '\x03';
    }
    if ((cVar3 == cVar1) || ((cVar3 == '\x01' && (cVar1 == '\x03')))) {
      if (DAT_180b909b0 == 0) {
        ppuVar5 = &PTR_s_Glock_18_180797be0 + uVar6 * 2;
      }
      else {
        if ((ulonglong)
            (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <=
            uVar6) goto LAB_180474816;
        ppuVar5 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x28) + uVar6 * 0x10);
      }
      if ((*(byte *)((longlong)ppuVar5 + 9) & (param_3 != 0) + 1U) != 0) {
        piVar2 = *(int **)(*param_1 + 8);
        if (piVar2 != *(int **)param_1[1]) {
          *piVar2 = iVar7;
          *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 4;
          iVar7 = iVar7 + 1;
          goto LAB_1804746c7;
        }
        FUN_18026b910(param_1,piVar2,local_res10,cVar1,uVar8);
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



