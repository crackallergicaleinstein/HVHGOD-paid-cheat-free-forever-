// FUN_1800f4e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f4e90 */

undefined1 (*) [16]
FUN_1800f4e90(undefined1 (*param_1) [16],longlong *param_2,char param_3,char param_4)

{
  undefined1 (*pauVar1) [16];
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  uint uVar20;
  longlong *plVar21;
  undefined1 (*local_d8) [16];
  undefined1 (*local_d0) [16];
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined1 (*local_78) [16];
  undefined1 local_70 [56];
  
  *param_1 = (undefined1  [16])0x0;
  (*param_1)[0] = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  pauVar1 = (undefined1 (*) [16])param_2[1];
  pauVar18 = (undefined1 (*) [16])*param_2;
  local_d0 = pauVar1;
  pauVar14 = pauVar18;
  local_d8 = param_1;
  local_78 = param_1;
  do {
    if (pauVar14 == pauVar1) {
      bVar8 = true;
LAB_1800f4f39:
      bVar7 = bVar8;
      if (param_3 == '\0') {
        bVar7 = false;
        if (param_4 != '\x02') {
          bVar7 = bVar8;
        }
        if ((param_4 == '\x01') && (!bVar7)) {
          FUN_18015bae0(&local_98,"cannot create object from initializer list");
          FUN_1800f6ca0(local_70,0x12d,&local_98);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_70,&DAT_1808d1050);
        }
      }
      if (bVar7) {
        (*param_1)[0] = 1;
        FUN_180111d10(&local_c8,1);
        *(longlong **)(*param_1 + 8) = local_c8;
        if (pauVar18 != pauVar1) {
          do {
            uVar20 = 0;
            if (*(longlong *)pauVar18[1] == 0) {
              local_98 = *(ulonglong *)*pauVar18;
              uStack_90 = *(longlong **)(*pauVar18 + 8);
              (*pauVar18)[0] = 0;
              *(undefined8 *)(*pauVar18 + 8) = 0;
            }
            else {
              FUN_1800f4a50(&local_98);
            }
            plVar2 = *(longlong **)(*param_1 + 8);
            local_c8 = (longlong *)*uStack_90;
            plVar3 = (longlong *)local_c8[1];
            plVar4 = (longlong *)*plVar2;
            plVar17 = (longlong *)plVar4[1];
            plVar16 = local_c8;
            plVar21 = plVar4;
            if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
              plVar16 = plVar17;
              do {
                plVar17 = plVar16;
                cVar9 = FUN_180114040(plVar17 + 4,plVar3);
                if (-1 < cVar9) {
                  plVar15 = plVar17;
                  plVar21 = plVar17;
                }
                else {
                  plVar15 = plVar17 + 2;
                }
                uVar20 = (uint)(-1 < cVar9);
                plVar16 = (longlong *)*plVar15;
              } while (*(char *)(*plVar15 + 0x19) == '\0');
              plVar16 = local_c8;
            }
            uStack_c0 = CONCAT44(uStack_90._4_4_,uVar20);
            local_c8 = plVar17;
            if ((*(char *)((longlong)plVar21 + 0x19) != '\0') ||
               (cVar9 = FUN_180114040(plVar3,plVar21 + 4), cVar9 < '\0')) {
              if (plVar2[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
                FUN_1800a7740();
              }
              local_a0 = (longlong *)0x0;
              local_a8 = plVar2;
              FUN_180156fd0(&local_a8);
              *(undefined1 (*) [16])(local_a0 + 4) = (undefined1  [16])0x0;
              local_a0[6] = 0;
              local_a0[7] = 0;
              lVar11 = plVar3[1];
              lVar5 = plVar3[2];
              lVar6 = plVar3[3];
              local_a0[4] = *plVar3;
              local_a0[5] = lVar11;
              local_a0[6] = lVar5;
              local_a0[7] = lVar6;
              *(undefined1 *)plVar3 = 0;
              plVar3[2] = 0;
              plVar3[3] = 0xf;
              lVar11 = plVar16[3];
              local_a0[8] = plVar16[2];
              local_a0[9] = lVar11;
              *(undefined1 *)(plVar16 + 2) = 0;
              plVar16[3] = 0;
              *local_a0 = (longlong)plVar4;
              local_a0[1] = (longlong)plVar4;
              local_a0[2] = (longlong)plVar4;
              *(undefined2 *)(local_a0 + 3) = 0;
              local_a0 = (longlong *)0x0;
              FUN_180140480(plVar2,&local_c8);
            }
            FUN_1801409d0(&uStack_90,local_98 & 0xff);
            pauVar18 = (undefined1 (*) [16])(pauVar18[1] + 8);
            param_1 = local_d8;
          } while (pauVar18 != local_d0);
        }
      }
      else {
        (*param_1)[0] = 2;
        local_d8 = pauVar18;
        local_d0 = pauVar1;
        uVar13 = FUN_18010f520(&local_d8,&local_d0);
        *(undefined8 *)(*param_1 + 8) = uVar13;
      }
      return param_1;
    }
    pauVar19 = *(undefined1 (**) [16])pauVar14[1];
    pauVar10 = pauVar14;
    if (pauVar19 != (undefined1 (*) [16])0x0) {
      pauVar10 = pauVar19;
    }
    if ((*pauVar10)[0] != '\x02') {
LAB_1800f4f61:
      bVar8 = false;
      goto LAB_1800f4f39;
    }
    pauVar10 = pauVar14;
    if (pauVar19 != (undefined1 (*) [16])0x0) {
      pauVar10 = pauVar19;
    }
    lVar11 = FUN_1800f3d40(pauVar10);
    if (lVar11 != 2) goto LAB_1800f4f61;
    pauVar10 = pauVar14;
    if (pauVar19 != (undefined1 (*) [16])0x0) {
      pauVar10 = pauVar19;
    }
    pcVar12 = (char *)FUN_1800f4590(pauVar10,0);
    if (*pcVar12 != '\x03') goto LAB_1800f4f61;
    pauVar14 = (undefined1 (*) [16])(pauVar14[1] + 8);
  } while( true );
}



