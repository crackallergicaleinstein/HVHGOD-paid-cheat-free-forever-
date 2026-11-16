// FUN_1803e0120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e0120 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint * FUN_1803e0120(undefined8 param_1,longlong param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  code *pcVar13;
  uint *puVar14;
  char *local_58;
  longlong local_50;
  char *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined *local_30;
  
  puVar1 = (undefined8 *)(param_2 + 0x28);
  if (puVar1 == (undefined8 *)0x0) {
LAB_1803e0776:
    puVar11 = (uint *)0x0;
  }
  else {
    piVar4 = *(int **)(param_2 + 0x38);
    if (piVar4 == (int *)0x0) {
LAB_1803e017a:
      local_38 = *puVar1;
      if ((DAT_180cce330 & 1) == 0) {
        DAT_180cce330 = DAT_180cce330 | 1;
        atexit(FUN_180662340);
      }
      lVar8 = DAT_1809ba8c8;
      lVar9 = DAT_1808da460;
      uVar12 = 1000;
      if ((DAT_1809ba8c8 != DAT_1808da460) || (pcVar13 = (code *)DAT_180c71f98, DAT_180c71f98 == 0))
      {
        UVar7 = GetTickCount64();
        if ((lVar8 == lVar9) && (UVar7 < DAT_180c71fa0)) goto LAB_1803e0776;
        local_30 = &DAT_1809ba8d0;
        iVar6 = FUN_1805f68d0(&DAT_1809ba8d0);
        if (iVar6 != 0) goto LAB_1803e0796;
        if (DAT_1809ba91c == 0x7fffffff) {
          DAT_1809ba91c = 0x7ffffffe;
          goto LAB_1803e07ab;
        }
        if (DAT_1809ba8c8 == lVar9) {
          if ((DAT_180c71f98 == 0) && (DAT_180c71fa0 <= UVar7)) goto LAB_1803e025a;
        }
        else {
          DAT_1809ba800 = 1000;
LAB_1803e025a:
          lVar8 = -1;
          do {
            local_50 = lVar8 + 1;
            lVar10 = lVar8 + 1;
            lVar8 = local_50;
          } while ("client.dll:>E8????????488BD0488D4E28"[lVar10] != '\0');
          local_58 = "client.dll:>E8????????488BD0488D4E28";
          local_48 = "patterns::history_field_alloc";
          local_40 = 0x1d;
          DAT_180c71f98 = FUN_1800e5d20(&local_48,&local_58);
          DAT_1809ba8c8 = lVar9;
          DAT_180c71fa0 = 0xffffffffffffffff;
          if (DAT_180c71f98 == 0) {
            DAT_180c71fa0 = DAT_1809ba800 + UVar7;
            if (DAT_1809ba800 < 60000) {
              DAT_1809ba800 = DAT_1809ba800 * 2;
            }
            else {
              DAT_1809ba800 = 60000;
            }
          }
          else {
            DAT_1809ba800 = 1000;
          }
        }
        pcVar13 = (code *)DAT_180c71f98;
        FUN_1805f68fc(&DAT_1809ba8d0);
        if (pcVar13 == (code *)0x0) goto LAB_1803e0776;
      }
      lVar9 = (*pcVar13)(local_38);
      if (lVar9 == 0) goto LAB_1803e0776;
      if ((DAT_180cce330 & 1) == 0) {
        DAT_180cce330 = DAT_180cce330 | 1;
        atexit(FUN_180662340);
      }
      lVar10 = DAT_1809ba808;
      lVar8 = DAT_1808da460;
      if ((DAT_1809ba808 == DAT_1808da460) && (pcVar13 = (code *)DAT_180c71f78, DAT_180c71f78 != 0))
      {
LAB_1803e0474:
        (*pcVar13)(puVar1,lVar9);
      }
      else {
        UVar7 = GetTickCount64();
        if ((lVar10 != lVar8) || (DAT_180c71f80 <= UVar7)) {
          local_30 = &DAT_1809ba820;
          iVar6 = FUN_1805f68d0(&DAT_1809ba820);
          if (iVar6 != 0) {
LAB_1803e0796:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1809ba86c == 0x7fffffff) {
            DAT_1809ba86c = 0x7ffffffe;
LAB_1803e07ab:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if (DAT_1809ba808 == lVar8) {
            if ((DAT_180c71f78 == 0) && (DAT_180c71f80 <= UVar7)) goto LAB_1803e03d6;
          }
          else {
            DAT_1809ba810 = 1000;
LAB_1803e03d6:
            lVar10 = -1;
            do {
              local_40 = lVar10 + 1;
              lVar5 = lVar10 + 1;
              lVar10 = local_40;
            } while ("client.dll:>E8????????4C8BD0458B4A10"[lVar5] != '\0');
            local_48 = "client.dll:>E8????????4C8BD0458B4A10";
            local_58 = "patterns::utl_vector_push";
            local_50 = 0x19;
            DAT_180c71f78 = FUN_1800e5d20(&local_58,&local_48);
            DAT_1809ba808 = lVar8;
            DAT_180c71f80 = 0xffffffffffffffff;
            if (DAT_180c71f78 == 0) {
              DAT_180c71f80 = DAT_1809ba810 + UVar7;
              uVar12 = DAT_1809ba810 * 2;
              if (59999 < DAT_1809ba810) {
                uVar12 = 60000;
              }
            }
            DAT_1809ba810 = uVar12;
          }
          pcVar13 = (code *)DAT_180c71f78;
          FUN_1805f68fc(&DAT_1809ba820);
          if (pcVar13 != (code *)0x0) goto LAB_1803e0474;
        }
      }
      puVar11 = (uint *)(lVar9 + 0x10);
      if (puVar11 == (uint *)0x0) goto LAB_1803e0776;
    }
    else {
      iVar6 = *(int *)(param_2 + 0x30);
      if ((*piVar4 <= iVar6) ||
         (lVar9 = *(longlong *)(piVar4 + (longlong)iVar6 * 2 + 2), lVar9 == 0)) goto LAB_1803e017a;
      *(int *)(param_2 + 0x30) = iVar6 + 1;
      puVar11 = (uint *)(lVar9 + 0x10);
      if (puVar11 == (uint *)0x0) goto LAB_1803e017a;
    }
    uVar2 = param_3[6];
    *puVar11 = *puVar11 | 0x200;
    uVar3 = *puVar11;
    puVar11[0x14] = uVar2;
    uVar2 = param_3[7];
    *puVar11 = uVar3 | 0x400;
    puVar11[0x15] = uVar2;
    uVar2 = param_3[8];
    *puVar11 = uVar3 | 0xc00;
    puVar11[0x16] = uVar2;
    uVar2 = param_3[9];
    *puVar11 = uVar3 | 0x1c00;
    puVar11[0x17] = uVar2;
    uVar2 = param_3[10];
    *puVar11 = uVar3 | 0x3c00;
    puVar11[0x18] = uVar2;
    puVar11[0x19] = param_3[0xb];
    *puVar11 = uVar3 | 0x7c01;
    puVar14 = (uint *)0x0;
    if (*(longlong *)(puVar11 + 2) != 0) {
      puVar14 = (uint *)(*(longlong *)(puVar11 + 2) + 0x10);
    }
    if (puVar14 != (uint *)0x0) {
      uVar2 = *param_3;
      *puVar14 = *puVar14 | 1;
      uVar3 = *puVar14;
      puVar14[2] = uVar2;
      uVar2 = param_3[1];
      *puVar14 = uVar3 | 2;
      puVar14[3] = uVar2;
      uVar2 = param_3[2];
      *puVar14 = uVar3 | 6;
      puVar14[4] = uVar2;
    }
    *puVar11 = *puVar11 | 0x20;
    puVar14 = (uint *)0x0;
    if (*(longlong *)(puVar11 + 0xc) != 0) {
      puVar14 = (uint *)(*(longlong *)(puVar11 + 0xc) + 0x10);
    }
    if (puVar14 != (uint *)0x0) {
      uVar2 = param_3[3];
      *puVar14 = *puVar14 | 1;
      uVar3 = *puVar14;
      puVar14[2] = uVar2;
      uVar2 = param_3[4];
      *puVar14 = uVar3 | 2;
      puVar14[3] = uVar2;
      uVar2 = param_3[5];
      *puVar14 = uVar3 | 6;
      puVar14[4] = uVar2;
    }
    *puVar11 = *puVar11 | 2;
    puVar14 = (uint *)0x0;
    if (*(longlong *)(puVar11 + 4) != 0) {
      puVar14 = (uint *)(*(longlong *)(puVar11 + 4) + 0x10);
    }
    if (puVar14 != (uint *)0x0) {
      uVar2 = param_3[0xc];
      *puVar14 = *puVar14 | 1;
      puVar14[2] = uVar2;
    }
    *puVar11 = *puVar11 | 4;
    puVar14 = (uint *)0x0;
    if (*(longlong *)(puVar11 + 6) != 0) {
      puVar14 = (uint *)(*(longlong *)(puVar11 + 6) + 0x10);
    }
    if (puVar14 != (uint *)0x0) {
      uVar2 = param_3[0xd];
      *puVar14 = *puVar14 | 2;
      uVar3 = *puVar14;
      puVar14[3] = uVar2;
      uVar2 = param_3[0xe];
      *puVar14 = uVar3 | 4;
      puVar14[4] = uVar2;
      uVar2 = param_3[0xf];
      *puVar14 = uVar3 | 5;
      puVar14[2] = uVar2;
    }
    *puVar11 = *puVar11 | 8;
    puVar14 = (uint *)0x0;
    if (*(longlong *)(puVar11 + 8) != 0) {
      puVar14 = (uint *)(*(longlong *)(puVar11 + 8) + 0x10);
    }
    if (puVar14 != (uint *)0x0) {
      uVar2 = param_3[0x10];
      *puVar14 = *puVar14 | 2;
      uVar3 = *puVar14;
      puVar14[3] = uVar2;
      uVar2 = param_3[0x11];
      *puVar14 = uVar3 | 4;
      puVar14[4] = uVar2;
      uVar2 = param_3[0x12];
      *puVar14 = uVar3 | 5;
      puVar14[2] = uVar2;
    }
    *puVar11 = *puVar11 | 0x10;
    puVar14 = (uint *)0x0;
    if (*(longlong *)(puVar11 + 10) != 0) {
      puVar14 = (uint *)(*(longlong *)(puVar11 + 10) + 0x10);
    }
    if (puVar14 != (uint *)0x0) {
      uVar2 = param_3[0x13];
      *puVar14 = *puVar14 | 2;
      uVar3 = *puVar14;
      puVar14[3] = uVar2;
      uVar2 = param_3[0x14];
      *puVar14 = uVar3 | 4;
      puVar14[4] = uVar2;
      uVar2 = param_3[0x15];
      *puVar14 = uVar3 | 5;
      puVar14[2] = uVar2;
    }
    if ((char)param_3[0x1f] != '\0') {
      *puVar11 = *puVar11 | 0x40;
      puVar14 = (uint *)0x0;
      if (*(longlong *)(puVar11 + 0xe) != 0) {
        puVar14 = (uint *)(*(longlong *)(puVar11 + 0xe) + 0x10);
      }
      if (puVar14 != (uint *)0x0) {
        uVar2 = param_3[0x16];
        *puVar14 = *puVar14 | 1;
        uVar3 = *puVar14;
        puVar14[2] = uVar2;
        uVar2 = param_3[0x17];
        *puVar14 = uVar3 | 2;
        puVar14[3] = uVar2;
        uVar2 = param_3[0x18];
        *puVar14 = uVar3 | 6;
        puVar14[4] = uVar2;
      }
      *puVar11 = *puVar11 | 0x80;
      puVar14 = (uint *)0x0;
      if (*(longlong *)(puVar11 + 0x10) != 0) {
        puVar14 = (uint *)(*(longlong *)(puVar11 + 0x10) + 0x10);
      }
      if (puVar14 != (uint *)0x0) {
        uVar2 = param_3[0x19];
        *puVar14 = *puVar14 | 1;
        uVar3 = *puVar14;
        puVar14[2] = uVar2;
        uVar2 = param_3[0x1a];
        *puVar14 = uVar3 | 2;
        puVar14[3] = uVar2;
        uVar2 = param_3[0x1b];
        *puVar14 = uVar3 | 6;
        puVar14[4] = uVar2;
      }
      *puVar11 = *puVar11 | 0x100;
      puVar14 = (uint *)0x0;
      if (*(longlong *)(puVar11 + 0x12) != 0) {
        puVar14 = (uint *)(*(longlong *)(puVar11 + 0x12) + 0x10);
      }
      if (puVar14 != (uint *)0x0) {
        uVar2 = param_3[0x1c];
        *puVar14 = *puVar14 | 1;
        uVar3 = *puVar14;
        puVar14[2] = uVar2;
        uVar2 = param_3[0x1d];
        *puVar14 = uVar3 | 2;
        puVar14[3] = uVar2;
        uVar2 = param_3[0x1e];
        *puVar14 = uVar3 | 6;
        puVar14[4] = uVar2;
      }
    }
  }
  return puVar11;
}



