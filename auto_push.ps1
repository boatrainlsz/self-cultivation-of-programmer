git pull
git add .
$date = Get-Date
$msg="new commit:"+ $date
echo $msg

git commit -m $msg
git push origin master
