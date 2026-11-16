// FUN_1805c5890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c5890 */

ulonglong FUN_1805c5890(longlong param_1,uint param_2,int param_3,ulonglong *param_4)

{
  short *psVar1;
  longlong lVar2;
  ulonglong in_RAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  psVar1 = *(short **)(param_1 + 0x4e0);
  if (((((psVar1 != (short *)0x0) && (*(longlong *)(psVar1 + 0x40) != 0)) && (*psVar1 != 0)) &&
      ((uVar3 = *(uint *)(psVar1 + 0xc), uVar3 != 0 &&
       (lVar2 = *(longlong *)(psVar1 + 0x10), lVar2 != 0)))) &&
     ((*param_4 == 0 && (uVar5 = 0, uVar3 != 0)))) {
    do {
      uVar4 = (uVar3 - uVar5 >> 1) + uVar5;
      lVar7 = (ulonglong)(uVar4 * 6) + lVar2;
      in_RAX = 0;
      uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar7 + 4),*(undefined1 *)(lVar7 + 5));
      if (uVar6 < param_2) {
        uVar5 = uVar4 + 1;
      }
      else {
        if (uVar6 <= param_2) {
          in_RAX = 0;
          uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + 6),*(undefined1 *)(lVar7 + 7)),
                                    *(undefined1 *)(lVar7 + 8)),*(undefined1 *)(lVar7 + 9));
          if ((uVar3 != 0) && (uVar3 <= *(uint *)(psVar1 + 0x44))) {
            in_RAX = (ulonglong)*(uint *)(psVar1 + 0x44) + *(longlong *)(psVar1 + 0x40);
            if ((ulonglong)uVar3 + lVar2 < in_RAX) {
              *param_4 = (ulonglong)uVar3 + lVar2;
              *(bool *)(param_4 + 1) = param_3 == 0;
              return CONCAT71((int7)(in_RAX >> 8),1);
            }
          }
          break;
        }
        uVar3 = uVar4;
      }
    } while (uVar5 < uVar3);
  }
  return in_RAX & 0xffffffffffffff00;
}



