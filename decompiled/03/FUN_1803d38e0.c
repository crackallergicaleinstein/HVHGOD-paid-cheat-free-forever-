// FUN_1803d38e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d38e0 */

void FUN_1803d38e0(undefined8 param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong local_58;
  uint uStack_50;
  ushort uStack_4c;
  char cStack_4a;
  undefined1 uStack_49;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [16];
  
  if (param_2 != 0) {
    uVar2 = (ushort)param_3;
    uVar10 = uVar2 & 0x7fff;
    if (((uVar10 < 0x4000) && (pcVar5 = (char *)FUN_1803d3fa0(), pcVar5 != (char *)0x0)) &&
       (cVar4 = *pcVar5, cVar4 != '\0')) {
      uVar9 = 0x811c9dc5;
      do {
        pcVar5 = pcVar5 + 1;
        uVar9 = ((int)cVar4 ^ uVar9) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
      if (((param_3 - 1 < 0xfffffffe) && (uVar9 != 0)) && ((param_3 & 0x7fff) < 0x4000)) {
        uVar11 = (ulonglong)(param_3 & 0x7fff);
        puVar12 = &DAT_180b0e108 + uVar11 * 4;
        do {
          uVar8 = *puVar12;
          while ((uVar8 & 1) == 0) {
            pcVar5 = (char *)(uVar8 + 1);
            LOCK();
            uVar1 = *puVar12;
            if (uVar8 == uVar1) {
              *puVar12 = (ulonglong)pcVar5;
              uVar6 = uVar8;
            }
            else {
              uVar6 = uVar1;
            }
            UNLOCK();
            if (uVar8 == uVar1) {
              (&DAT_180b0e110)[uVar11 * 8] = param_3;
              (&DAT_180b0e118)[uVar11 * 4] = param_2;
              (&DAT_180b0e120)[uVar11 * 8] = uVar9;
              *puVar12 = uVar8 + 2;
              goto LAB_1803d39b0;
            }
            uVar8 = uVar6;
          }
        } while( true );
      }
LAB_1803d39b0:
      cVar4 = FUN_1803d4600(pcVar5,uVar9);
      local_40 = ZEXT816(0x180b0e0f8);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180b0e0f8);
      plVar3 = DAT_180b0e0e8;
      local_40[8] = 1;
      for (plVar7 = DAT_180b0e0e0; plVar7 != DAT_180b0e0e8; plVar7 = plVar7 + 3) {
        if (*(ushort *)((longlong)plVar7 + 0xc) == uVar10) {
          if (cVar4 == '\0') {
            FUN_18063aed0(plVar7,plVar7 + 3,(longlong)DAT_180b0e0e8 - (longlong)(plVar7 + 3));
            DAT_180b0e0e8 = DAT_180b0e0e8 + -3;
            goto LAB_1803d3ab8;
          }
          if (((*plVar7 == param_2) && (*(uint *)(plVar7 + 1) == uVar9)) &&
             (*(uint *)(plVar7 + 2) == param_3)) goto LAB_1803d3abe;
          *plVar7 = param_2;
          plVar7[1] = CONCAT17(uStack_49,CONCAT16(cVar4,CONCAT24(uVar2,uVar9))) & 0xffff7fffffffffff
          ;
          plVar7[2] = CONCAT44(uStack_44,param_3);
          local_58 = param_2;
          uStack_50 = uVar9;
          uStack_4c = uVar10;
          cStack_4a = cVar4;
          local_48 = param_3;
          goto LAB_1803d3ab8;
        }
      }
      if (cVar4 != '\0') {
        if (DAT_180b0e0e8 == DAT_180b0e0f0) {
          local_58 = param_2;
          uStack_50 = uVar9;
          uStack_4c = uVar10;
          cStack_4a = cVar4;
          local_48 = param_3;
          FUN_1802eac60(&DAT_180b0e0e0,DAT_180b0e0e8,&local_58);
        }
        else {
          *DAT_180b0e0e8 = param_2;
          plVar3[1] = CONCAT17(uStack_49,CONCAT16(cVar4,CONCAT24(uVar2,uVar9))) & 0xffff7fffffffffff
          ;
          plVar3[2] = CONCAT44(uStack_44,param_3);
          DAT_180b0e0e8 = DAT_180b0e0e8 + 3;
          local_58 = param_2;
          uStack_50 = uVar9;
          uStack_4c = uVar10;
          cStack_4a = cVar4;
          local_48 = param_3;
        }
LAB_1803d3ab8:
        FUN_1803d4410();
      }
LAB_1803d3abe:
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180b0e0f8);
    }
  }
  return;
}



