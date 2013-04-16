#1362794218
ALTER TABLE `login` ADD COLUMN `pincode` varchar(4) NOT NULL DEFAULT '';
ALTER TABLE `login` ADD COLUMN `pincode_change` int(11) unsigned NOT NULL DEFAULT '0';
INSERT INTO `sql_updates` (`timestamp`) VALUES (1362794218);
#1366075474
#Info http://hercules.ws/board/topic/410-skill-script-command-updatefix/
UPDATE `skill` SET `flag` = 0 WHERE `flag` = 4 AND `id` != 2535 AND `id` != 681;
