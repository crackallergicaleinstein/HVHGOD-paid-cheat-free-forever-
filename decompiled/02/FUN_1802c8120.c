// FUN_1802c8120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c8120 */

undefined1 (*) [16]
FUN_1802c8120(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined *_Size;
  void *_Buf2;
  int iVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined4 uVar14;
  
  puVar8 = (undefined *)0x0;
  ppuVar6 = &PTR_s_logevents_damagedealt_gun_1807fff60;
  _Buf2 = (void *)*param_2;
  puVar13 = (undefined *)param_2[1];
  while ((puVar5 = ppuVar6[1], puVar5 != puVar13 ||
         ((puVar5 != (undefined *)0x0 && (iVar4 = memcmp(*ppuVar6,_Buf2,(size_t)puVar5), iVar4 != 0)
          )))) {
    ppuVar6 = ppuVar6 + 4;
    if (ppuVar6 == &PTR_s_shop_click_180800440) {
      pcVar12 = "unknown";
      puVar13 = (undefined *)0x7;
LAB_1802c81ab:
      *param_1 = (undefined1  [16])0x0;
      *(undefined8 *)param_1[1] = 0;
      *(undefined8 *)(param_1[1] + 8) = 0xf;
      (*param_1)[0] = 0;
      uVar14 = 1;
      if (puVar13 != (undefined *)0x0) {
        do {
          pcVar7 = puVar8 + (longlong)pcVar12;
          if ((((*pcVar7 == '{') && (puVar8 < puVar13)) &&
              (puVar5 = (undefined *)
                        thunk_FUN_1805f7e70(pcVar7,puVar13 + (longlong)pcVar12,0x7d,param_4,uVar14),
              puVar5 != puVar13 + (longlong)pcVar12)) &&
             (puVar5 = puVar5 + -(longlong)pcVar12, puVar5 != (undefined *)0xffffffffffffffff)) {
            puVar1 = puVar8 + 1;
            if (puVar13 < puVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_18015ac40();
            }
            puVar9 = puVar5 + (-1 - (longlong)puVar8);
            if (puVar13 + -(longlong)puVar1 < puVar5 + (-1 - (longlong)puVar8)) {
              puVar9 = puVar13 + -(longlong)puVar1;
            }
            puVar10 = (undefined8 *)*param_3;
            puVar3 = (undefined8 *)param_3[1];
joined_r0x0001802c8257:
            puVar8 = puVar5;
            if (puVar10 != puVar3) {
              _Size = (undefined *)puVar10[1];
              if ((_Size != puVar9) ||
                 ((_Size != (undefined *)0x0 &&
                  (iVar4 = memcmp((void *)*puVar10,puVar1 + (longlong)pcVar12,(size_t)_Size),
                  iVar4 != 0)))) goto LAB_1802c827d;
              pcVar7 = (char *)puVar10[2];
              pcVar11 = pcVar7 + puVar10[3];
              for (; pcVar7 != pcVar11; pcVar7 = pcVar7 + 1) {
                cVar2 = *pcVar7;
                if (((cVar2 != '^') && (cVar2 != '\n')) && (cVar2 != '\r')) {
                  FUN_18015af80(param_1);
                }
              }
            }
            goto LAB_1802c82d7;
          }
          FUN_18015af80(param_1,*pcVar7);
LAB_1802c82d7:
          puVar8 = puVar8 + 1;
        } while (puVar8 < puVar13);
      }
      return param_1;
    }
  }
  puVar13 = ppuVar6[3];
  pcVar12 = ppuVar6[2];
  goto LAB_1802c81ab;
LAB_1802c827d:
  puVar10 = puVar10 + 4;
  goto joined_r0x0001802c8257;
}



