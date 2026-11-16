// FUN_18048e460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048e460 */

ulonglong FUN_18048e460(byte *param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar12 = 0;
  bVar1 = *param_1;
  uVar3 = 0;
  do {
    if (bVar1 == 0) {
      return 1;
    }
    if ((0x3d < bVar1) ||
       (uVar10 = uVar3, (0x2000000100002400U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0)) {
      pcVar4 = (char *)FUN_180606b00("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                     ,(int)(char)bVar1);
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        return (ulonglong)pcVar4 & 0xffffffffffffff00;
      }
      uVar12 = (int)pcVar4 + 0x7f848690U | uVar12 << 6;
      uVar10 = uVar3 + 6;
      if (7 < (int)uVar10) {
        uVar10 = uVar3 - 2;
        puVar8 = (undefined1 *)param_2[1];
        if (puVar8 == (undefined1 *)param_2[2]) {
          lVar13 = (longlong)puVar8 - *param_2;
          if (lVar13 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          uVar6 = param_2[2] - *param_2;
          uVar9 = 0x7fffffffffffffff;
          if ((uVar6 <= 0x7fffffffffffffff - (uVar6 >> 1)) &&
             (uVar9 = (uVar6 >> 1) + uVar6, uVar9 < lVar13 + 1U)) {
            uVar9 = lVar13 + 1U;
          }
          lVar5 = FUN_18015bca0(uVar9);
          *(char *)(lVar13 + lVar5) = (char)(uVar12 >> (uVar10 & 0x1f));
          puVar2 = (undefined1 *)*param_2;
          if (puVar8 == (undefined1 *)param_2[1]) {
            lVar11 = param_2[1] - (longlong)puVar2;
            lVar7 = lVar5;
            puVar8 = puVar2;
          }
          else {
            FUN_18063aed0(lVar5,puVar2,(longlong)puVar8 - (longlong)puVar2);
            lVar11 = param_2[1] - (longlong)puVar8;
            lVar7 = lVar13 + 1 + lVar5;
          }
          FUN_18063aed0(lVar7,puVar8,lVar11);
          FUN_1801413a0(param_2,lVar5,lVar13 + 1,uVar9);
        }
        else {
          *puVar8 = (char)(uVar12 >> (uVar10 & 0x1f));
          param_2[1] = param_2[1] + 1;
        }
      }
    }
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    uVar3 = uVar10;
  } while( true );
}



