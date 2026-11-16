// FUN_180453d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180453d10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180453d10(short *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  short *psVar2;
  undefined8 *******pppppppuVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined8 *******_Buf2;
  longlong *plVar11;
  void *_Buf1;
  longlong lVar12;
  int *piVar13;
  uint *puVar14;
  void *pvVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_c8 [32];
  int *local_a8;
  short *local_a0;
  undefined1 local_98 [16];
  undefined1 auStack_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 *******local_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  iVar18 = 0;
  if ((((param_1 != (short *)0x0) && (param_2[1] != 0)) && (*param_1 == 0x5a4d)) &&
     (piVar13 = (int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1), *piVar13 == 0x4550)
     ) {
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = piVar13;
    local_a0 = param_1;
    FUN_18015ba30(local_78,*param_2,param_2[1]);
    pauVar7 = (undefined1 (*) [16])FUN_180141490(local_78,0,&DAT_180827f10,4);
    local_98 = *pauVar7;
    auStack_88 = pauVar7[1];
    *(undefined8 *)(pauVar7[1] + 8) = 0xf;
    (*pauVar7)[0] = 0;
    *(undefined8 *)pauVar7[1] = 0;
    puVar8 = (undefined8 *)FUN_18015b2a0(local_98,&DAT_180827f0c,2);
    local_58 = (undefined8 *******)*puVar8;
    uStack_50 = puVar8[1];
    uStack_48 = puVar8[2];
    uStack_40 = puVar8[3];
    *(undefined1 *)puVar8 = 0;
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    FUN_18015c010(local_98);
    FUN_18015c010(local_78);
    uVar5 = uStack_40;
    uVar4 = uStack_48;
    pppppppuVar3 = local_58;
    if (*(short *)((longlong)piVar13 + 6) != 0) {
      puVar14 = (uint *)((longlong)piVar13 + (ulonglong)*(ushort *)(piVar13 + 5) + 0x20);
      piVar13 = local_a8;
      do {
        if ((puVar14[7] & 0x40000040) == 0x40000040) {
          if (uVar4 < *puVar14) {
            _Buf1 = (void *)((longlong)param_1 + (ulonglong)puVar14[1]);
            pvVar15 = (void *)((longlong)_Buf1 + (*puVar14 - uVar4));
            param_1 = local_a0;
            for (; local_a0 = param_1, _Buf1 < pvVar15; _Buf1 = (void *)((longlong)_Buf1 + 1)) {
              _Buf2 = &local_58;
              if (0xf < uVar5) {
                _Buf2 = pppppppuVar3;
              }
              iVar6 = memcmp(_Buf1,_Buf2,uVar4 + 1);
              psVar2 = local_a0;
              piVar13 = local_a8;
              if (iVar6 == 0) {
                if ((longlong)_Buf1 + -0x10 != 0) {
                  iVar6 = (int)local_a0;
                  iVar18 = 0;
                  if (*(short *)((longlong)local_a8 + 6) != 0) {
                    lVar19 = 0;
                    do {
                      lVar12 = (ulonglong)*(ushort *)(piVar13 + 5) + 0x18 + lVar19 +
                               (longlong)piVar13;
                      puVar14 = (uint *)(lVar12 + 8);
                      puVar9 = (uint *)thunk_FUN_1805f9970(lVar12,puVar14,".rdata",6);
                      if (((puVar9 != puVar14) && ((longlong)puVar9 - lVar12 != -1)) &&
                         (0x30 < *puVar14)) {
                        plVar17 = (longlong *)
                                  ((ulonglong)*(uint *)(lVar12 + 0xc) + (longlong)psVar2);
                        plVar16 = (longlong *)((longlong)plVar17 + ((ulonglong)*puVar14 - 0x30));
                        for (plVar11 = plVar17; plVar11 < plVar16; plVar11 = plVar11 + 1) {
                          if (*(int *)((longlong)plVar11 + 0xc) ==
                              (int)((longlong)_Buf1 + -0x10) - iVar6) {
                            plVar10 = plVar17;
                            do {
                              plVar1 = plVar10 + 1;
                              if ((longlong *)*plVar10 == plVar11) goto LAB_180453ee8;
                              plVar10 = plVar1;
                            } while (plVar1 < plVar16);
                          }
                        }
                      }
                      iVar18 = iVar18 + 1;
                      lVar19 = lVar19 + 0x28;
                      if ((int)(uint)*(ushort *)((longlong)piVar13 + 6) <= iVar18) {
                        FUN_18015c010(&local_58);
                      }
                    } while( true );
                  }
                }
                goto LAB_180453ee8;
              }
              param_1 = local_a0;
            }
          }
          piVar13 = local_a8;
        }
        iVar18 = iVar18 + 1;
        puVar14 = puVar14 + 10;
      } while (iVar18 < (int)(uint)*(ushort *)((longlong)piVar13 + 6));
    }
LAB_180453ee8:
    FUN_18015c010(&local_58);
  }
}



